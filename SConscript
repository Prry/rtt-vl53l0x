from building import *
Import('rtconfig')

src   = []
cwd   = GetCurrentDir()

src += Glob('vl53l0x/core/src/*.c')
src += Glob('vl53l0x/platform/src/*.c')

# add vl53l0x src files.
if GetDepend('PKG_VL53L0X_USING_SENSOR_V1'):
    src += Glob('src/vl53l0x_sensor_v1.c')

		
if GetDepend('PKG_VL53L0X_USING_SENSOR_V1_SAMPLE'):
    src += Glob('examples/vl53l0x_sample_sensor_v1.c')

# add vl53l0x include path.
path  = [cwd + '/inc',cwd+'/vl53l0x/core/inc',cwd+'/vl53l0x/platform/inc']

# add src and include to group.
group = DefineGroup('vl53l0x', src, depend = ['PKG_USING_VL53L0X'], CPPPATH = path)

Return('group')
