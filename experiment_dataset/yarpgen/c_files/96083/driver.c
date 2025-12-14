#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9387745614180677108ULL;
unsigned short var_8 = (unsigned short)36788;
unsigned int var_9 = 742888282U;
unsigned int var_11 = 1368084813U;
int zero = 0;
int var_12 = 2122285076;
unsigned char var_13 = (unsigned char)41;
short var_14 = (short)29093;
unsigned short var_15 = (unsigned short)54908;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
