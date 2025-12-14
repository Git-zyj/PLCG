#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)5;
unsigned char var_3 = (unsigned char)247;
long long int var_7 = 1705136428906562000LL;
int zero = 0;
unsigned long long int var_15 = 938252820721525678ULL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)72;
void init() {
}

void checksum() {
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
