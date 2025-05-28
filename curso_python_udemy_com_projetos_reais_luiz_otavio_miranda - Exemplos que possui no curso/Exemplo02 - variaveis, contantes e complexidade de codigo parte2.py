velocidade = 60
local_carro = 90

radar_1 = 60
local_1= 100
radar_range = 1

vel_passou_radar_1 = velocidade > radar_1
carro_multado_radar_1 = local_carro >= (local_1 - radar_1) and \
    local_carro <= (local_1 + radar_range)
carro_multado_radar_1 = carro_multado_radar_1 and vel_passou_radar_1

if vel_passou_radar_1:
    print("Velocidade carro passou do radar 1")

if carro_multado_radar_1:
    print("Carro multado em radar 1")