#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15106061224427297154ULL;
unsigned int var_6 = 913644823U;
long long int var_7 = -4533400172606640519LL;
short var_8 = (short)30371;
unsigned long long int var_11 = 17332320463609501529ULL;
short var_13 = (short)10234;
short var_16 = (short)-13474;
_Bool var_17 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-9;
unsigned long long int var_21 = 12061901970233388315ULL;
signed char var_22 = (signed char)39;
int var_23 = 1048205141;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
