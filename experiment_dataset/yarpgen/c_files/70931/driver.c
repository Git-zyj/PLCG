#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 8282754300479890169ULL;
signed char var_13 = (signed char)-6;
unsigned int var_14 = 802641216U;
int zero = 0;
unsigned char var_17 = (unsigned char)230;
unsigned int var_18 = 786474801U;
unsigned char var_19 = (unsigned char)155;
unsigned int var_20 = 3292871051U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
