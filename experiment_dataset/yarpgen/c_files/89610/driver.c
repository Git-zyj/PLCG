#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -833228848;
short var_3 = (short)-3640;
unsigned char var_7 = (unsigned char)89;
signed char var_9 = (signed char)-52;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 989406355U;
unsigned long long int var_16 = 13361025647510542149ULL;
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
