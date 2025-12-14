#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 1136967608139573377ULL;
long long int var_6 = -3739646659696034023LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = 1153253309;
unsigned char var_19 = (unsigned char)192;
unsigned char var_20 = (unsigned char)245;
void init() {
}

void checksum() {
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
