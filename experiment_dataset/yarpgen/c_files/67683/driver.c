#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-89;
signed char var_4 = (signed char)109;
unsigned char var_5 = (unsigned char)220;
signed char var_8 = (signed char)22;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 12990623513104941761ULL;
void init() {
}

void checksum() {
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
