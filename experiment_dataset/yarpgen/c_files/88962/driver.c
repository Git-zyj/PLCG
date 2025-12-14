#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)11833;
unsigned short var_8 = (unsigned short)39274;
unsigned short var_9 = (unsigned short)5010;
_Bool var_10 = (_Bool)1;
unsigned int var_14 = 1088223712U;
int var_15 = -919824657;
long long int var_17 = 8663533631031687248LL;
int zero = 0;
unsigned int var_18 = 78434882U;
unsigned int var_19 = 3276754914U;
unsigned long long int var_20 = 6296930009482616893ULL;
signed char var_21 = (signed char)26;
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
