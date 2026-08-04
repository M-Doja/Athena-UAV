import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/athena-uav/Athena/Athena-UAV/install/athena_health_manager'
