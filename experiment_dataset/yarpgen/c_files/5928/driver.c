#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 343807011;
unsigned short var_2 = (unsigned short)31223;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)-41;
signed char var_7 = (signed char)-55;
signed char var_10 = (signed char)43;
unsigned long long int var_13 = 14334944973024635600ULL;
int zero = 0;
int var_17 = -1419687459;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 3747145506402902555ULL;
long long int var_20 = 1255666828168513721LL;
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
