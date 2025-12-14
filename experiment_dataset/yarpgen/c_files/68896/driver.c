#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)8;
unsigned int var_15 = 876050947U;
long long int var_16 = -2526085587787057670LL;
int zero = 0;
int var_17 = -153213670;
signed char var_18 = (signed char)15;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)53687;
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
