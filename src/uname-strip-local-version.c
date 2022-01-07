#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>

int uname(struct utsname *name) {
  static int(*uname_real)(struct utsname *);
  if (!uname_real) {
    uname_real = dlsym(RTLD_NEXT, "uname");
  }
  const int ret = (*uname_real)(name);
  if (ret == 0) {
    for (int i = 0; name->release[i]; i++) {
      if (name->release[i] == '-') {
        name->release[i] = '\0';
        break;
      }
    }
  }
  return ret;
}
