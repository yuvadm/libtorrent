#include <torrent/torrent.h>
#include <torrent/system/thread.h>
#include <torrent/runtime/runtime.h>

static_assert(alignof(torrent::system::Thread) == LT_SMP_CACHE_BYTES);

int main() {
  return torrent::runtime::version() == nullptr;
}
