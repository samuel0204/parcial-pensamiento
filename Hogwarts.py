class Escoba:
    def __init__(self, velocidad, limite):
        self.velocidad = velocidad
        self.limite = limite

    def verificar_velocidad(self):
        pass  

class RegulacionEscoba(Escoba):
    def verificar_velocidad(self):
        resultado = lambda: (
            "Velocidad permitida. El estudiante podrá continuar." if self.velocidad <= self.limite
            else "Advertencia. Madame Hooch dará una amonestación verbal." if self.velocidad <= self.limite + 20000
            else "Multa. Se descontarán puntos de la casa del estudiante."
        )
        print(resultado())

V = int(input("Ingrese la velocidad de la escoba: "))
L = int(input("Ingrese el límite de velocidad: "))

escoba = RegulacionEscoba(V, L)
escoba.verificar_velocidad()
