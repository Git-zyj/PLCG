#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_6 = (unsigned char)41;
long long int var_9 = 6440995287302577983LL;
unsigned short var_11 = (unsigned short)32545;
int zero = 0;
unsigned short var_14 = (unsigned short)47431;
unsigned short var_15 = (unsigned short)20243;
signed char var_16 = (signed char)49;
void init() {
}

void checksum() {
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
