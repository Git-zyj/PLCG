#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17964880233382806634ULL;
long long int var_5 = 6377526753204971264LL;
signed char var_6 = (signed char)13;
unsigned long long int var_10 = 6648448722940618363ULL;
short var_14 = (short)10413;
unsigned int var_16 = 3924607304U;
int zero = 0;
signed char var_17 = (signed char)114;
unsigned char var_18 = (unsigned char)98;
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
