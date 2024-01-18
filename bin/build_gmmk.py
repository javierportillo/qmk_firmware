import subprocess
import os

BOARDS = ['gmmk/full/rev2' , 'gmmk/full/rev3']

for kb in BOARDS:
    subprocess.run(f"bin/qmk compile -kb {kb} -km all -j{os.cpu_count()}", shell=True)
