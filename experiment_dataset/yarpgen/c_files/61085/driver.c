#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4667742334165805159LL;
int var_8 = 2112153118;
int var_9 = 1834770216;
long long int var_13 = -1602355480574327798LL;
int zero = 0;
long long int var_14 = -6332959088284206255LL;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)13420;
int var_17 = 1183198029;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
