// DRAFT version, not yet implemented / working!
// Library that intercepts requests to specified paths and redirects them to MinIO-mc.
// Useful for "mounting" virtual MinIO / S3 filesystem within program.

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

int hook_open(const char *pathname, int flags, ...)
{
    // TODO
}

int install_hooks()
{
    puts('Install hooks...');
}
