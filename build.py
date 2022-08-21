# encoding=utf-8

import os

build_path = "./build"

if os.path.exists(build_path):
    print("Build file have existed, please rm first.")
    exit(1)
else:
    os.mkdir(build_path)
    os.chdir(build_path)
    os.system("cmake ..")
    os.system("make")