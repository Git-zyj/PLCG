#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14189802307837468216ULL;
long long int var_5 = 456002306064346738LL;
int var_6 = -826121318;
unsigned int var_7 = 2870515113U;
signed char var_15 = (signed char)-96;
unsigned char var_17 = (unsigned char)188;
unsigned long long int var_18 = 14253205864901447156ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
int var_20 = 1498894858;
int var_21 = -592894024;
void init() {
}

void checksum() {
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
