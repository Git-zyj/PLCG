#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32831;
_Bool var_1 = (_Bool)0;
int var_2 = -1510937679;
unsigned short var_4 = (unsigned short)52122;
int var_5 = -2025030896;
long long int var_6 = -7875585845029074007LL;
signed char var_8 = (signed char)78;
long long int var_9 = 6985621492153833059LL;
int zero = 0;
int var_12 = 703870636;
unsigned long long int var_13 = 2206875596330244447ULL;
unsigned int var_14 = 2710237317U;
long long int var_15 = -5346761170064192536LL;
unsigned char var_16 = (unsigned char)214;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
