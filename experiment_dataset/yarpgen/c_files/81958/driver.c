#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 313775754;
int var_3 = 1261540137;
unsigned short var_4 = (unsigned short)45890;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)64886;
int zero = 0;
int var_11 = 1494792333;
unsigned short var_12 = (unsigned short)42950;
void init() {
}

void checksum() {
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
