#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_3 = (short)-23594;
int var_4 = -1259541845;
signed char var_5 = (signed char)115;
unsigned long long int var_10 = 9278635979925576460ULL;
unsigned short var_11 = (unsigned short)12587;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)26191;
int var_16 = 820642172;
unsigned short var_18 = (unsigned short)38487;
int zero = 0;
signed char var_20 = (signed char)-56;
unsigned short var_21 = (unsigned short)8463;
long long int var_22 = 2921555035787598553LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
