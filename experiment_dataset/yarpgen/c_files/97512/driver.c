#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 5831516257660841470ULL;
signed char var_8 = (signed char)40;
unsigned int var_16 = 3485480858U;
_Bool var_17 = (_Bool)1;
long long int var_18 = -9149300032871142836LL;
int zero = 0;
unsigned long long int var_19 = 13981104573321245451ULL;
unsigned int var_20 = 3995474605U;
int var_21 = -1354362151;
unsigned int var_22 = 1989740990U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
