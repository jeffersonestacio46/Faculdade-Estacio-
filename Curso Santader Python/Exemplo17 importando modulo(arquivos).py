#Neste exemplo, importa-se o módulo math utilizando a declaração import. Em seguida, utiliza-se a função sqrt() do módulo math para calcular a raiz quadrada de 25.
import math #A função math Fornece funções matemáticas, como sqrt() (raiz quadrada), sin() (seno), cos() (cosseno), entre outras.


resultado = math.sqrt(25)
print(resultado)  # Imprime 5.0

#Ou

#Neste caso, importa-se apenas a função sqrt() do módulo math, o que nos permite utilizá-la diretamente sem ter que precedê-la com o nome do módulo.
from math import sqrt


resultado = sqrt(25)
print(resultado)  # Imprime 5.0