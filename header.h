#ifndef HEADER_H
#define HEADER_H

class Figura
{
public:
	float x;
	Figura();
	~Figura();
	virtual void perimetro() =0;
	virtual void area() = 0;
};

class Circulo : public Figura
{
public:
	Circulo(float);
	~Circulo();
	void perimetro();
	void area();
};

class Cuadrado : public Figura
{
public:
	Cuadrado(float);
	~Cuadrado();
	void perimetro();
	void area();
};

#endif