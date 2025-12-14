#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2260640099183512978LL;
_Bool var_2 = (_Bool)1;
int var_3 = 878524004;
unsigned int var_9 = 1293146379U;
unsigned int var_16 = 2149228209U;
unsigned short var_18 = (unsigned short)63221;
int var_19 = -1792320452;
int zero = 0;
long long int var_20 = 8070394892351427289LL;
unsigned int var_21 = 3367519560U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
