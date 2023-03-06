def factorial():
        numero = int(input("Ingrese un número: "))
        factorial = numero
        for i in range(1,numero):
                factorial = factorial * i
        
        print(factorial)
factorial()