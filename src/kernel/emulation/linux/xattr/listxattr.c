#include "listxattr.h"
#include "../base.h"
#include "../errno.h"
#include <asm/unistd.h>
#include <libdyld/VirtualPrefix.h>

#define XATTR_NOFOLLOW	1

long sys_listxattr(const char* path, char* namebuf, unsigned long size, int options)
{
	int ret;

	if (options & XATTR_NOFOLLOW)
		ret = LINUX_SYSCALL(__NR_llistxattr, __prefix_translate_path(path),
				namebuf, size);
	else
		ret = LINUX_SYSCALL(__NR_listxattr, __prefix_translate_path(path),
				namebuf, size);

	if (ret < 0)
		return errno_linux_to_bsd(ret);

	return 0;
}

