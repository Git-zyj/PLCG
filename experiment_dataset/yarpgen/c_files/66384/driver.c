#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3388445406U;
long long int var_9 = -7414118471261384979LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3010190779U;
unsigned char var_20 = (unsigned char)47;
signed char var_21 = (signed char)96;
void init() {
}

void checksum() {
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
