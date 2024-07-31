#include <unistd.h>
#include <string.h>
/**
 * _write - Writes data to a file descriptor
 * @fd: The file descriptor to write to standard output
 * @buf: The buffer containing the data to write
 * @count: The number of bytes to write
 *
 * Return: The number of bytes written, or -1 on error
 */
ssize_t _write(int fd, const void *buf, size_t count)
{
	return (write(fd, buf, count));
}
