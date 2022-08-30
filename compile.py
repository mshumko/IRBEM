# f2py -c `find ./source/ -type f -iname "*.f" | xargs -d '\n'` -m test
# f2py -m irbempy `find ./source/ -type f -iname "*.f" | xargs -d '\n'`

import pathlib

import numpy.f2py

source_dir = pathlib.Path(__file__).parent 
paths = list(pathlib.Path(source_dir, 'source').glob("*.f"))

source = ''

for path in paths:
    with open(path, 'r') as f:
        try:
            source += f.read()
        except UnicodeDecodeError as err:
            print(err)
            continue

numpy.f2py.compile(source, modulename='irbempy')

import irbempy

pass