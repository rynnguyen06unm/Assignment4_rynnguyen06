#include <iostream>
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

}

int main()
{
    Item *item_list = new Item[5];

    char name1[] = "";
    char sku1[] = "";
    char category1[] = "";

    
    return 0;
}
