#ifndef
#define TriangoloRettangolo

class TriangoloRettangolo
{
  public:
    void area(float& a);
    float perimetro();
  private:
    float cateto1;
    float cateto2;
    float ipotenusa;
    
  TriangoloRettangolo(float c1, float c2);
  ~TriangoloRettangolo();
}

#endif
