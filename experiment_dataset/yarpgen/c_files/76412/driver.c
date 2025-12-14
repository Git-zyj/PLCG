#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23005;
signed char var_1 = (signed char)-3;
unsigned int var_2 = 3176601564U;
int var_3 = -1416056712;
unsigned int var_4 = 3547520457U;
unsigned short var_5 = (unsigned short)43667;
unsigned long long int var_7 = 14200346788683033258ULL;
_Bool var_8 = (_Bool)0;
long long int var_9 = -8315751322818124898LL;
unsigned int var_10 = 3226574274U;
int zero = 0;
unsigned long long int var_11 = 982812736641567683ULL;
int var_12 = -1513279249;
long long int var_13 = 4409290509335655716LL;
unsigned int var_14 = 2354529037U;
unsigned int var_15 = 682485126U;
unsigned long long int var_16 = 13709399747061990132ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
