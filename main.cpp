#include <iostream>
#include <cstring>
#include "item.h"

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
void free_items(Item *item_list, int size)
{

}
double average_price(Item *item_list, int size)
{

}
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

int main()
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
    
    return 0;
}
