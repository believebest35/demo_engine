# encoding=utf-8

import os
import shutil

build_path = "./build"

if os.path.exists(build_path):
    shutil.rmtree(build_path)
    print("Build files cleaned.")
else:
    print("Build files do not exist.")
    exit(1)