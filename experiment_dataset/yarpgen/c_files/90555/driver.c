#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3334797825742944639LL;
signed char var_6 = (signed char)-108;
int var_7 = -129416995;
_Bool var_8 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)1;
short var_15 = (short)20077;
int var_16 = 1677803670;
_Bool var_17 = (_Bool)0;
long long int var_18 = 3147870009546523813LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
