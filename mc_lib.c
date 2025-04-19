// DRAFT version, not yet implemented / working!
// Library that starts and connects to Python server that sends requests to MinIO-mc.
// Useful for "mounting" virtual MinIO / S3 filesystem within program.

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int start()
{
    puts('Start Python MinIO-connect program...');
    system("./mc_filesys.py /tmp/fifo_queue")
}
