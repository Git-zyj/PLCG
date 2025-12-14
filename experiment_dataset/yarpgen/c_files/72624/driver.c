#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -517898001;
unsigned short var_2 = (unsigned short)36149;
unsigned int var_3 = 1054866562U;
unsigned char var_11 = (unsigned char)35;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1308634212U;
unsigned short var_15 = (unsigned short)24032;
long long int var_16 = 6292416282978503491LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
