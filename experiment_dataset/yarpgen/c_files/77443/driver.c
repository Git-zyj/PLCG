#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-82;
unsigned char var_4 = (unsigned char)185;
unsigned int var_7 = 2156850944U;
unsigned int var_8 = 2741264348U;
short var_9 = (short)4149;
unsigned char var_15 = (unsigned char)143;
signed char var_16 = (signed char)-67;
signed char var_18 = (signed char)89;
signed char var_19 = (signed char)-79;
int zero = 0;
unsigned long long int var_20 = 13171900939602529211ULL;
unsigned long long int var_21 = 4799787959942236547ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
