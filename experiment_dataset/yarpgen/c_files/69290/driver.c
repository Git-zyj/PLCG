#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-44;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 16640588565212547183ULL;
int var_9 = -1540390001;
short var_12 = (short)-6626;
long long int var_14 = -5471764804305551898LL;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = 8546300762367768899LL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)6464;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
