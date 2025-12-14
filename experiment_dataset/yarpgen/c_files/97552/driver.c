#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
long long int var_6 = -4611236626911721070LL;
signed char var_9 = (signed char)-75;
signed char var_12 = (signed char)-64;
signed char var_13 = (signed char)89;
short var_15 = (short)31436;
int zero = 0;
unsigned short var_16 = (unsigned short)44303;
signed char var_17 = (signed char)40;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 959021461631805109ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
