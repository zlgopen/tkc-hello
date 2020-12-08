import scripts.app_helper as app

helper = app.Helper(ARGUMENTS)
helper.set_tkc_only().add_libs(['foo'])
helper.set_dll_def('src/foo.def').call(DefaultEnvironment)

SConsFiles = [
    'demos/SConscript',
    'tests/SConscript',
    'src/SConscript'
]

SConscript(SConsFiles)
