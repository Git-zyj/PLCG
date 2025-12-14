#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1327837731U;
unsigned int var_3 = 2701380566U;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)9;
signed char var_10 = (signed char)-89;
unsigned long long int var_13 = 746199952853504810ULL;
unsigned long long int var_15 = 17903073993125929330ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)45732;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)34221;
_Bool var_20 = (_Bool)0;
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
