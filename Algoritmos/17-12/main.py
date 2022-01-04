peso = int(input('valor em kg: '))
altura = int(input('valor em cm: '))
IMC = (peso/(altura * altura))*10000
print(IMC)



if (IMC < 17):
print ( 'Muito abaixo do peso')

elif (IMC => 17 or IMC <= 18):
print ('Peso normal')

elif (IMC => 19 or IMC <= 24)
print ('Acima do peso')

elif (IMC => 25 or IMC <= 29):
print ('Obesidade I ')

elif (IMC => 30 or IMC <= 35):
print ('Obesidade II (severa)' )

else :
print ('Obesidade III (mórbida)')