#include <iostream>

class Vector3D
{
private:
    double m_x, m_y, m_z;

public:
    class Point3D
    {
    private:
        double m_x, m_y, m_z;

    public:
        Point3D(double x = 0.0, double y = 0.0, double z = 0.0) : m_x(x), m_y(y), m_z(z)
        {

        }

        void print()
        {
            std::cout << "Точка(" << m_x << " , " << m_y << " , " << m_z << ")\n";
        }

        void moveByVector(const Vector3D& v);
    };

    Vector3D(double x = 0.0, double y = 0.0, double z = 0.0) : m_x(x), m_y(y), m_z(z)
    {

    }

    void print()
    {
        std::cout << "Вектор(" << m_x << " , " << m_y << " , " << m_z << ")\n";
    }
};

// Визначення методу moveByVector для Point3D
void Vector3D::Point3D::moveByVector(const Vector3D& v)
{
    m_x += v.m_x;
    m_y += v.m_y;
    m_z += v.m_z;
}

int main()
{
    system("chcp 1251 > nul");
    Vector3D v(3.0, 3.0, -2.0);
    Vector3D::Point3D p(3.0, 4.0, 5.0);

    p.print();
    p.moveByVector(v);
    v.print();
    p.print();

    return 0;
}