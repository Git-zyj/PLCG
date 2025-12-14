#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)7876;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 12514008469857480559ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
long long int var_18 = -9022450813910253683LL;
signed char var_19 = (signed char)-109;
long long int var_20 = -7160429578249821020LL;
unsigned long long int var_21 = 240855667478992572ULL;
short var_22 = (short)-26814;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
