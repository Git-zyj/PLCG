#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8160440499236562142ULL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-93;
unsigned short var_8 = (unsigned short)64841;
unsigned int var_9 = 3123226758U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)90;
int zero = 0;
unsigned long long int var_13 = 4788306525748064700ULL;
unsigned int var_14 = 1755151980U;
signed char var_15 = (signed char)-91;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
