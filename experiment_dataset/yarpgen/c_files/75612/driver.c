#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6303301292436216707LL;
long long int var_2 = 6629940199924253951LL;
int var_3 = 859568985;
_Bool var_5 = (_Bool)1;
short var_8 = (short)7407;
unsigned short var_9 = (unsigned short)9990;
unsigned short var_10 = (unsigned short)12127;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = -2323359268884015632LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
