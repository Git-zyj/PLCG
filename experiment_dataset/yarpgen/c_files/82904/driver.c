#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 328066643U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 6025055564940973009ULL;
int var_10 = 338715024;
int var_12 = 453932907;
unsigned int var_13 = 1581738348U;
int var_15 = 258008155;
signed char var_16 = (signed char)127;
int var_18 = -1197521635;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3520134981U;
unsigned char var_21 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
