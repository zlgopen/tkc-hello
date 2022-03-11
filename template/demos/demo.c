#include "hello.h"

int main(int argc, char* argv[]) {
  platform_prepare();

  log_debug("result: %d\n", hello(1, 2));

  return 0;
}
