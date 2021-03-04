#pragma once
#include<ctime>
template <class T> 
class Array
    {
    private:
        int length;
        T* data;

    public:
        Array()
        {
            length = 0;
            data = nullptr;
        }

        Array(int length)
        {
            data = new T[length];
            this->length = length;
        }

        ~Array()
        {
            delete[] data;
        }

        T& operator[](int index)
        {
            return data[index];
        }

        void Fill()
        {
            srand();
            for each (auto var in data)
            var.data = rand(time(nullptr));
            
        }

        void Show()
        {
            if (length!=0)
                for each (auto var in data)
                {
                    cout << data << endl;
                }
        }

        void Erase()
        {
            delete[] data;
            // Присваиваем значение nullptr для data, чтобы на выходе не получить висячий указатель!
            data = nullptr;
            length = 0;
        }


        

        int getLength(); 
    };

template<class T>
inline int Array<T>::getLength()
    {
        return length;
    }
