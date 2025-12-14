#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 538887121U;
short var_3 = (short)27904;
int var_7 = -1858155597;
unsigned short var_9 = (unsigned short)60824;
int zero = 0;
short var_10 = (short)17759;
short var_11 = (short)9297;
int var_12 = -641739097;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
