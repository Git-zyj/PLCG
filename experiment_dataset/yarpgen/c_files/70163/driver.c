#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 14894380316323775215ULL;
unsigned short var_2 = (unsigned short)24246;
unsigned short var_3 = (unsigned short)28008;
int var_4 = -811996904;
short var_5 = (short)-13633;
long long int var_6 = 1956597845452474334LL;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)39132;
unsigned short var_12 = (unsigned short)42173;
int zero = 0;
unsigned long long int var_13 = 17660495611983041270ULL;
int var_14 = -1144910915;
void init() {
}

void checksum() {
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
