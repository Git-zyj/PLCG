#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40670;
short var_3 = (short)9752;
unsigned short var_4 = (unsigned short)63990;
unsigned short var_6 = (unsigned short)48752;
unsigned short var_7 = (unsigned short)5385;
short var_9 = (short)-32406;
int zero = 0;
unsigned short var_11 = (unsigned short)23561;
short var_12 = (short)14937;
unsigned short var_13 = (unsigned short)50639;
short var_14 = (short)-32071;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
