#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 337403983U;
unsigned long long int var_1 = 10896227464009605645ULL;
unsigned long long int var_2 = 6742756037608557300ULL;
unsigned int var_3 = 4006864108U;
_Bool var_7 = (_Bool)1;
short var_11 = (short)-29162;
signed char var_12 = (signed char)83;
short var_14 = (short)-6640;
int zero = 0;
unsigned long long int var_16 = 4239148060508440202ULL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)110;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
