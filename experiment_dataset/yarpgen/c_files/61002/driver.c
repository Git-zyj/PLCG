#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5670193953870115502LL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 10181169361575431116ULL;
short var_8 = (short)-25283;
int zero = 0;
short var_10 = (short)6219;
long long int var_11 = -5309075592811142649LL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)199;
long long int var_14 = 135841575280982140LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
