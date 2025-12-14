#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-18;
int var_2 = -1417114411;
unsigned char var_4 = (unsigned char)96;
_Bool var_5 = (_Bool)1;
short var_6 = (short)28918;
signed char var_9 = (signed char)10;
unsigned long long int var_11 = 74785259484662424ULL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_16 = 15435241027772051663ULL;
int zero = 0;
signed char var_17 = (signed char)-81;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 429648242U;
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
