#include <iostream>
#include <cstring>
#include "item.h"

// step 2.4, add item function
void add_item(Item *item_list, double price, char *sku, char *category, char *name, int index)
{
    item_list[index].price = price;
    item_list[index].sku = new char[std::strlen(sku) + 1];
    std::strcpy(item_list[index].sku, sku);

    item_list[index].category = new char[std::strlen(category) + 1];
    std::strcpy(item_list[index].category, category);

    item_list[index].name = new char[std::strlen(name) + 1];
    std::strcpy(item_list[index].name, name);
}
// step 2.7, free memory function
void free_items(Item *item_list, int size)
{
    for (int i = 0; i < size; i++)
    {
        delete[] item_list[i].sku;
        delete[] item_list[i].category;
        delete[] item_list[i].name;
    }

    delete[] item_list;
}
// step 2.6, average price function
double average_price(Item *item_list, int size)
{
    double total = 0;
    for (int i = 0; i < size; i++)
    {
        total = total + item_list[i].price;
    }

    double average = total / size;

    std::cout << "average price of items = " << average << "\n";

    return average;
}
// step 2.5, print items function
void print_items(Item *item_list, int size)
{
for (int i = 0; i < size; i++)
    {
        std::cout << "item " << i + 1 << " name = " << item_list[i].name << "\n";
        std::cout << "item " << i + 1 << " sku = " << item_list[i].sku << "\n";
        std::cout << "item " << i + 1 << " category = " << item_list[i].category << "\n";
        std::cout << "item " << i + 1 << " price = " << item_list[i].price << "\n";
    }
}

int main(int argc, char *argv[]) // step 4.1
{
    Item *item_list = new Item[5];

    char name1[] = "milk";
    char sku1[] = "1";
    char category1[] = "dairy";

    char name2[] = "chocolate milk";
    char sku2[] = "2";
    char category2[] = "dairy";

    char name3[] = "blue milk";
    char sku3[] = "3";
    char category3[] = "dairy";

    char name4[] = "green milk";
    char sku4[] = "4";
    char category4[] = "dairy";

    char name5[] = "pink milk";
    char sku5[] = "5";
    char category5[] = "dairy";
    
    add_item(item_list, 5, sku1, category1, name1, 0); // 2.4, adds items to array in function 
    add_item(item_list, 5, sku2, category2, name2, 1);
    add_item(item_list, 5, sku3, category3, name3, 2);
    add_item(item_list, 5, sku4, category4, name4, 3);
    add_item(item_list, 5, sku5, category5, name5, 4);
    print_items(item_list, 5); // 2.5, prints items 
    average_price(item_list, 5); // 2.6, prints average price 

    // step 4 
    char *sku = argv[1]; // step 4.3
    int ct = 0; 
    while (ct < 5 && std::strcmp(item_list[ct].sku, sku) != 0) // step 4.4
    {
        ct++;
    }

    if (ct < 5)
    {
        std::cout << "item name = " << item_list[ct].name << "\n";
        std::cout << "item sku = " << item_list[ct].sku << "\n";
        std::cout << "item category = " << item_list[ct].category << "\n";
        std::cout << "item price = " << item_list[ct].price << "\n";
    }
    else
    {
        std::cout << "item not found\n";
    }

    free_items(item_list, 5); // 2.7, free allocated memory 
    
    return 0;
}
