#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2579923819U;
_Bool var_2 = (_Bool)1;
int var_3 = 1135901520;
long long int var_9 = 4628512805128085489LL;
int zero = 0;
short var_11 = (short)-32332;
unsigned short var_12 = (unsigned short)36712;
unsigned char var_13 = (unsigned char)206;
unsigned short var_14 = (unsigned short)53012;
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
