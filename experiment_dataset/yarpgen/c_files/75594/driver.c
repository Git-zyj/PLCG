#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4797151999345466156LL;
short var_9 = (short)8322;
unsigned char var_10 = (unsigned char)69;
int zero = 0;
unsigned short var_12 = (unsigned short)6828;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 306292873U;
int var_15 = -2128071097;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
