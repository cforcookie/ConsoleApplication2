#include <iostream>

int main()
{
    int double_arrary[10][10];
    int number = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            number++;
            double_arrary[i][j] = number;
        }
    }

    for (int i = 0; i < 10; ++i) {  // Выводим на экран строку i
        for (int j = 0; j < 10; ++j)
            std::cout << double_arrary[i][j] << " ";
        std::cout << std::endl; // Строка завершается символом перехода на новую строку
    }

    int result_row_max = 0;
    for (int i = 0; i < 10; i++)
    {
        int result_row = 0;
        for (int j = 0; j < 10; j++)
        {
            result_row = result_row + double_arrary[i][j];
        }
        if (i == 0)
        {
            result_row_max = result_row;
        }
        if (result_row_max < result_row)
        {
            result_row_max = result_row;
        }
    }
    std::cout << "Row summ max = " << result_row_max << std::endl;

    int result_column_min = 0;
    for (int j = 0; j < 10; j++)
    {
        int result_column = 0;
        for (int i = 0; i < 10; i++)
        {
            result_column = result_column + double_arrary[i][j];
        }
        if (j == 0)
        {
            result_column_min = result_column;
        }
        if (result_column_min > result_column)
        {
            result_column_min = result_column;
        }
    }
    std::cout << "Min row summ = " << result_column_min << std::endl;

}