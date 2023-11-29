#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <math.h>
int main()
{

    int i=0;
    while(i<=5){
        printf("Building dependency tree... Done\n");
        printf("Reading state information... Done\n");
        printf("The following additional packages will be installed:\n");
        // Additional packages to be installed
        printf("  libatomic1\n");
        printf("The following NEW packages will be installed:\n");
        printf("  cpp cpp-11 fontconfig-config fonts-dejavu-core gcc gcc-11 gcc-11-base libasan6 libatomic1\n");
        // Summary of changes
        printf("0 upgraded, 38 newly installed, 0 to remove and 0 not upgraded.\n");
        printf("Need to get 49.0 MB of archives.\n");
        printf("After this operation, 153.0 MB of additional disk space will be used.\n");
        // Prompt
        printf("Do you want to continue? [Y/n] \n");
        printf("Y\n");
        // Downloading packages
        printf("Get:1 http://archive.ubuntu.com/ubuntu focal/universe amd64 libatomic1 amd64 10.3.0-1ubuntu1 [9,216 B]\n");
        printf("Fetched 9,216 B in 0s (0 B/s)\n");
        printf("Get:1 http://security.ubuntu.com/ubuntu jammy-security InRelease [110 kB]\n");
        printf("Hit:2 http://archive.ubuntu.com/ubuntu jammy InRelease\n");
        printf("Get:3 http://archive.ubuntu.com/ubuntu jammy-updates InRelease [119 kB]\n");
         printf("Hit:2 http://archive.ubuntu.com/ubuntu jammy InRelease\n");
        printf("Get:4 http://security.ubuntu.com/ubuntu jammy-security/main amd64 Packages [991 kB]\n");
         printf("Hit:2 http://archive.ubuntu.com/ubuntu jammy InRelease\n");
        printf("Get:5 http://security.ubuntu.com/ubuntu jammy-security/main Translation-en [192 kB]\n");
         printf("Hit:2 http://archive.ubuntu.com/ubuntu jammy InRelease\n");
        printf("Get:6 http://archive.ubuntu.com/ubuntu jammy-backports InRelease [109 kB]\n");
         printf("Hit:2 http://archive.ubuntu.com/ubuntu jammy InRelease\n");
        printf("Get:7 http://security.ubuntu.com/ubuntu jammy-security/main amd64 c-n-f Metadata [11.4 kB]\n");
         printf("Hit:2 http://archive.ubuntu.com/ubuntu jammy InRelease\n");
        printf("Get:8 http://security.ubuntu.com/ubuntu jammy-security/restricted amd64 Packages [1147 kB]\n");
         printf("Hit:2 http://archive.ubuntu.com/ubuntu jammy InRelease\n");
        printf("Get:9 http://archive.ubuntu.com/ubuntu jammy/universe amd64 Packages [14.1 MB]\n");
         printf("Hit:2 http://archive.ubuntu.com/ubuntu jammy InRelease\n");
        printf("Get:10 http://security.ubuntu.com/ubuntu jammy-security/restricted Translation-en [187 kB]\n");
         printf("Hit:2 http://archive.ubuntu.com/ubuntu jammy InRelease\n");
        printf("Get:11 http://security.ubuntu.com/ubuntu jammy-security/restricted amd64 c-n-f Metadata [520 B]\n");
        printf("Get:12 http://security.ubuntu.com/ubuntu jammy-security/universe amd64 Packages [799 kB]\n");
         printf("Hit:2 http://archive.ubuntu.com/ubuntu jammy InRelease\n");
        printf("Get:13 http://security.ubuntu.com/ubuntu jammy-security/universe Translation-en [148 kB]\n");
        printf("Get:14 http://security.ubuntu.com/ubuntu jammy-security/universe amd64 c-n-f Metadata [16.8 kB]\n");
        printf("Get:15 http://security.ubuntu.com/ubuntu jammy-security/multiverse amd64 Packages [36.5 kB]\n");
        printf("Get:16 http://security.ubuntu.com/ubuntu jammy-security/multiverse Translation-en [7060 B]\n");
        printf("Get:17 http://security.ubuntu.com/ubuntu jammy-security/multiverse amd64 c-n-f Metadata [260 B]\n");
         printf("Hit:2 http://archive.ubuntu.com/ubuntu jammy InRelease\n");
        printf("Get:18 http://archive.ubuntu.com/ubuntu jammy/universe Translation-en [5652 kB]\n");
        printf("Get:19 http://archive.ubuntu.com/ubuntu jammy/universe amd64 c-n-f Metadata [286 kB]\n");
         printf("Hit:2 http://archive.ubuntu.com/ubuntu jammy InRelease\n");
        printf("Get:20 http://archive.ubuntu.com/ubuntu jammy/multiverse amd64 Packages [217 kB]\n");
        printf("Get:21 http://archive.ubuntu.com/ubuntu jammy/multiverse Translation-en [112 kB]\n");
         printf("Hit:2 http://archive.ubuntu.com/ubuntu jammy InRelease\n");
        printf("Get:22 http://archive.ubuntu.com/ubuntu jammy/multiverse amd64 c-n-f Metadata [8372 B]\n");
        printf("Get:23 http://archive.ubuntu.com/ubuntu jammy-updates/main amd64 Packages [1200 kB]\n");
         printf("Hit:2 http://archive.ubuntu.com/ubuntu jammy InRelease\n");
        printf("Get:24 http://archive.ubuntu.com/ubuntu jammy-updates/main Translation-en [252 kB]\n");
        printf("Get:25 http://archive.ubuntu.com/ubuntu jammy-updates/main amd64 c-n-f Metadata [16.1 kB]\n");
        printf("Get:26 http://archive.ubuntu.com/ubuntu jammy-updates/restricted amd64 Packages [1167 kB]\n");
        printf("Get:27 http://archive.ubuntu.com/ubuntu jammy-updates/restricted Translation-en [190 kB]\n");
        printf("Get:28 http://archive.ubuntu.com/ubuntu jammy-updates/restricted amd64 c-n-f Metadata [520 B]\n");
        printf("Get:29 http://archive.ubuntu.com/ubuntu jammy-updates/universe amd64 Packages [1005 kB]\n");
        printf("Get:30 http://archive.ubuntu.com/ubuntu jammy-updates/universe Translation-en [222 kB]\n");
        printf("Get:31 http://archive.ubuntu.com/ubuntu jammy-updates/universe amd64 c-n-f Metadata [22.1 kB]\n");
        printf("Get:32 http://archive.ubuntu.com/ubuntu jammy-updates/multiverse amd64 Packages [41.6 kB]\n");
         printf("Hit:2 http://archive.ubuntu.com/ubuntu jammy InRelease\n");
        printf("Get:33 http://archive.ubuntu.com/ubuntu jammy-updates/multiverse Translation-en [9768 B]\n");
        printf("Get:34 http://archive.ubuntu.com/ubuntu jammy-updates/multiverse amd64 c-n-f Metadata [472 B]\n");
        printf("Get:35 http://archive.ubuntu.com/ubuntu jammy-backports/main amd64 Packages [64.2 kB]\n");
        printf("Get:36 http://archive.ubuntu.com/ubuntu jammy-backports/main Translation-en [10.5 kB]\n");
        printf("Get:37 http://archive.ubuntu.com/ubuntu jammy-backports/main amd64 c-n-f Metadata [388 B]\n");
        printf("Get:38 http://archive.ubuntu.com/ubuntu jammy-backports/restricted amd64 c-n-f Metadata [116 B]\n");
        printf("Get:39 http://archive.ubuntu.com/ubuntu jammy-backports/universe amd64 Packages [27.8 kB]\n");
        printf("Get:40 http://archive.ubuntu.com/ubuntu jammy-backports/universe Translation-en [16.4 kB]\n");
        printf("Get:41 http://archive.ubuntu.com/ubuntu jammy-backports/universe amd64 c-n-f Metadata [644 B]\n");
        printf("Get:42 http://archive.ubuntu.com/ubuntu jammy-backports/multiverse amd64 c-n-f Metadata [116 B]\n");

        // Installing packages
         Sleep(400);
        printf("Selecting previously unselected package libatomic1:amd64.\n");
        printf("(Reading database ... 398613 files and directories currently installed.)\n");
        printf("Preparing to unpack .../libatomic1_10.3.0-1ubuntu1_amd64.deb ...\n");
        printf("Unpacking libatomic1:amd64 (10.3.0-1ubuntu1) ...\n");
        printf("Setting up libatomic1:amd64 (10.3.0-1ubuntu1) ...\n");
        // Processing triggers
         Sleep(400);
        printf("Processing triggers for libc-bin (2.31-0ubuntu9.16) ...\n");
        printf("Processing triggers for man-db (2.9.1-1) ...\n");
        // Additional lines for simulation
        printf("The following additional packages will be configured:\n");
        printf("  libgcc-s1 libgomp1 libitm1 libquadmath0 libstdc++6 libtsan0\n");
        printf("The following NEW packages will be installed:\n");
        printf("  libgcc-s1 libgomp1 libitm1 libquadmath0 libstdc++6 libtsan0\n");
        // Configuration steps
        printf("0 upgraded, 44 newly installed, 0 to remove and 0 not upgraded.\n");
        printf("Need to get 14.1 MB/17.7 MB of archives.\n");
        printf("After this operation, 73.6 MB/91.2 MB of additional disk space will be used.\n");
        // Prompt for configuration
        printf("Do you want to continue? [Y/n] ");
        // Downloading additional packages
        Sleep(400);
        printf("Get:2 http://archive.ubuntu.com/ubuntu focal/universe amd64 libgomp1 amd64 10.3.0-1ubuntu1 [111 kB]\n");
        printf("Fetched 111 kB in 0s (0 B/s)\n");
        // Installing additional packages
        Sleep(400);
        printf("Selecting previously unselected package libgomp1:amd64.\n");
        printf("Preparing to unpack .../libgomp1_10.3.0-1ubuntu1_amd64.deb ...\n");
        printf("Unpacking libgomp1:amd64 (10.3.0-1ubuntu1) ...\n");
        printf("Setting up libgomp1:amd64 (10.3.0-1ubuntu1) ...\n");
        // Processing triggers after additional installation
        printf("Processing triggers for libc-bin (2.31-0ubuntu9.16) ...\n");
        // Additional lines for simulation
        // ... (you can continue adding more steps as needed)
         Sleep(400);
        printf("Unpacking libssh-4:amd64 (0.9.6-2ubuntu0.22.04.1) over (0.9.6-2build1) ...\n");
        printf("Preparing to unpack .../33-libcurl3-gnutls_7.81.0-1ubuntu1.14_amd64.deb ...\n");
        printf("Unpacking libcurl3-gnutls:amd64 (7.81.0-1ubuntu1.14) over (7.81.0-1ubuntu1.10) ...\n");
        printf("Preparing to unpack .../34-git-man_1%%3a2.34.1-1ubuntu1.10_all.deb ...\n");
        printf("Unpacking git-man (1:2.34.1-1ubuntu1.10) over (1:2.34.1-1ubuntu1.9) ...\n");
        printf("Preparing to unpack .../35-git_1%%3a2.34.1-1ubuntu1.10_amd64.deb ...\n");
        printf("Unpacking git (1:2.34.1-1ubuntu1.10) over (1:2.34.1-1ubuntu1.9) ...\n");
        printf("Preparing to unpack .../36-openssh-client_1%%3a8.9p1-3ubuntu0.4_amd64.deb ...\n");
        printf("Unpacking openssh-client (1:8.9p1-3ubuntu0.4) over (1:8.9p1-3ubuntu0.1) ...\n");
        printf("Preparing to unpack .../37-python3-distro-info_1.1ubuntu0.1_all.deb ...\n");
        printf("Unpacking python3-distro-info (1.1ubuntu0.1) over (1.1build1) ...\n");
        printf("Preparing to unpack .../38-ubuntu-release-upgrader-core_1%%3a22.04.17_all.deb ...\n");
        printf("Unpacking ubuntu-release-upgrader-core (1:22.04.17) over (1:22.04.16) ...\n");
        printf("Preparing to unpack .../39-python3-distupgrade_1%%3a22.04.17_all.deb ...\n");
        printf("Unpacking python3-distupgrade (1:22.04.17) over (1:22.04.16) ...\n");
        printf("Preparing to unpack .../40-python3-gdbm_3.10.8-1~22.04_amd64.deb ...\n");
        printf("Unpacking python3-gdbm:amd64 (3.10.8-1~22.04) over (3.10.6-1~22.04) ...\n");
        printf("Preparing to unpack .../41-ubuntu-standard_1.481.1_amd64.deb ...\n");
        printf("Unpacking ubuntu-standard (1.481.1) over (1.481) ...\n");
        printf("Preparing to unpack .../42-ufw_0.36.1-4ubuntu0.1_all.deb ...\n");
        printf("Unpacking ufw (0.36.1-4ubuntu0.1) over (0.36.1-4build1) ...\n");
        printf("Preparing to unpack .../43-python3-problem-report_2.20.11-0ubuntu82.5_all.deb ...\n");
        printf("Unpacking python3-problem-report (2.20.11-0ubuntu82.5) over (2.20.11-0ubuntu82.4) ...\n");
        printf("Preparing to unpack .../44-python3-apport_2.20.11-0ubuntu82.5_all.deb ...\n");
        printf("Unpacking python3-apport (2.20.11-0ubuntu82.5) over (2.20.11-0ubuntu82.4) ...\n");
        printf("Preparing to unpack .../45-apport_2.20.11-0ubuntu82.5_all.deb ...\n");
        printf("Unpacking apport (2.20.11-0ubuntu82.5) over (2.20.11-0ubuntu82.4) ...\n");
        printf("Preparing to unpack .../46-libctf0_2.38-4ubuntu2.3_amd64.deb ...\n");
        printf("Unpacking libctf0:amd64 (2.38-4ubuntu2.3) over (2.38-4ubuntu2.1) ..\n");
        if(i%2==0){
            for(int j=0;j<=100;j++){
                Sleep(100);
                printf("Fetched %d kB in %ds (%d B/s)\n",j,rand(),rand());
            }
        }
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/g/gcc-11/gcc-11-base_11.3.0-1ubuntu1%%7e22.04_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/g/gcc-11/cpp-11_11.3.0-1ubuntu1%%7e22.04_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/g/gcc-12/libcc1-0_12.1.0-2ubuntu1%%7e22.04_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/g/gcc-12/libgomp1_12.1.0-2ubuntu1%%7e22.04_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/g/gcc-12/libitm1_12.1.0-2ubuntu1%%7e22.04_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/g/gcc-12/libatomic1_12.1.0-2ubuntu1%%7e22.04_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/g/gcc-11/libasan6_11.3.0-1ubuntu1%%7e22.04_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/g/gcc-12/liblsan0_12.1.0-2ubuntu1%%7e22.04_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/g/gcc-11/libtsan0_11.3.0-1ubuntu1%%7e22.04_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/g/gcc-12/libubsan1_12.1.0-2ubuntu1%%7e22.04_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/g/gcc-12/libquadmath0_12.1.0-2ubuntu1%%7e22.04_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/g/gcc-11/libgcc-11-dev_11.3.0-1ubuntu1%%7e22.04_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/g/gcc-11/gcc-11_11.3.0-1ubuntu1%%7e22.04_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://archive.ubuntu.com/ubuntu/pool/main/g/glibc/libc-dev-bin_2.35-0ubuntu3.1_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/f/freetype/libfreetype6_2.11.1%%2bdfsg-1ubuntu0.1_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/t/tiff/libtiff5_4.3.0-6ubuntu0.4_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/libx/libxpm/libxpm4_3.5.12-1ubuntu0.22.04.1_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://archive.ubuntu.com/ubuntu/pool/main/g/glibc/libc-devtools_2.35-0ubuntu3.1_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://security.ubuntu.com/ubuntu/pool/main/l/linux/linux-libc-dev_5.15.0-71.78_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");
        printf("E: Failed to fetch http://archive.ubuntu.com/ubuntu/pool/main/g/glibc/libc6-dev_2.35-0ubuntu3.1_amd64.deb  404  Not Found [IP: 91.189.91.82 80]\n");

        Sleep(40);
        i++;
    }
    printf("E: Unable to fetch some archives, maybe run apt-get update or try with --fix-missing?\n");
    return 0;
}
