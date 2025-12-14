#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3257795288125819840LL;
unsigned int var_5 = 1930107583U;
int var_7 = -630079216;
unsigned char var_10 = (unsigned char)75;
int var_17 = -1387543665;
unsigned long long int var_19 = 15762302145053545460ULL;
int zero = 0;
int var_20 = -613210567;
unsigned int var_21 = 865892802U;
long long int var_22 = -9046977779338480358LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
