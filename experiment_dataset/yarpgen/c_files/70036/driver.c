#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1691053338273556887LL;
unsigned int var_4 = 3582528989U;
long long int var_6 = 1943797739987987143LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
int var_17 = -726893570;
unsigned short var_18 = (unsigned short)23383;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
