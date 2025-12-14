#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11584529576630296095ULL;
signed char var_5 = (signed char)44;
signed char var_8 = (signed char)-63;
signed char var_13 = (signed char)68;
unsigned char var_15 = (unsigned char)141;
int zero = 0;
signed char var_19 = (signed char)-58;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
