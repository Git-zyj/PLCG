#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7878022104686619853LL;
long long int var_2 = 633404673428412683LL;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
long long int var_14 = 7985558190480398393LL;
int zero = 0;
unsigned int var_17 = 1906266869U;
unsigned short var_18 = (unsigned short)35449;
signed char var_19 = (signed char)-82;
unsigned long long int var_20 = 14140529250079459181ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
