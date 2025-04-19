#!/usr/bin/env python3
"""
The MinIO-mc filesystem implementation server.
Directs requests to mc command, using named pipes and temporary files to communicate with process.
"""

import os
import subprocess
import sys
import tempfile


def main():
    """
    Function invoked when this program is run.
    """

    if len(sys.argv) < 2:
        raise ValueError("Need to pass named pipe path as parameter!")


if __name__ == "__main__":
    main()
