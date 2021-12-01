#include "foo.h"
#include "tkc.h"

int main(int argc, char* argv[]) {
  platform_prepare();

  log_debug("result: %d\n", foo(1, 2));

  return 0;
}
