#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)15052;
short var_4 = (short)-15719;
short var_5 = (short)-19059;
long long int var_6 = -1166544811147496972LL;
unsigned long long int var_11 = 12644289147612248557ULL;
signed char var_17 = (signed char)-70;
int zero = 0;
unsigned short var_20 = (unsigned short)24459;
short var_21 = (short)301;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-15056;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
