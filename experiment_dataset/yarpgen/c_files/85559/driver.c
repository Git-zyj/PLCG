#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4770111585895820389LL;
unsigned char var_5 = (unsigned char)163;
unsigned int var_8 = 908296411U;
unsigned int var_9 = 2487714154U;
_Bool var_12 = (_Bool)1;
unsigned int var_16 = 2404700704U;
int zero = 0;
unsigned int var_17 = 3144691026U;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
