#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-37;
unsigned short var_7 = (unsigned short)30215;
unsigned short var_8 = (unsigned short)16416;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)23;
signed char var_16 = (signed char)123;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)114;
unsigned long long int var_19 = 13822417205425917473ULL;
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
