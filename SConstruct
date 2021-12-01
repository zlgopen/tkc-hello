import os
os.environ['TKC_ONLY'] = 'True'

import scripts.app_helper as app

helper = app.Helper(ARGUMENTS)
helper.add_libs(['foo'])
helper.set_dll_def('src/foo.def').call(DefaultEnvironment)

SConsFiles = [
    'src/SConscript',
    'demos/SConscript',
    'tests/SConscript',
]

SConscript(SConsFiles)
