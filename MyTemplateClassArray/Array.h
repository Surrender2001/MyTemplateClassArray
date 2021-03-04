#pragma once
#include<ctime>;
#include<iostream>
using namespace std;
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
            srand(time(nullptr));
            for (auto i = 0; i < length; i++)
            {
                data[i] = rand()%10;
            }
            
            
        }

        void Show()
        {
            if (length != 0)
                for (auto i = 0; i < length; i++)
                    cout << data[i] <<"\t";
            cout << "\n";
        }

        void Erase()
        {
            delete[] data;
            // Присваиваем значение nullptr для data, чтобы на выходе не получить висячий указатель!
            data = nullptr;
            length = 0;
        }

        void push_back(T value)
        {
            T* NewArray = new T[length + 1];
            for (int i = 0; i < length; i++)
            {
                NewArray[i] = data[i];
            }
            NewArray[length++] = value;
            delete[]data;
            data = NewArray;
        }
        

        int getLength(); 
    };

template<class T>
inline int Array<T>::getLength()
    {
        return length;
    }
