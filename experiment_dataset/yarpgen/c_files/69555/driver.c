#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6169112578708249980ULL;
int var_1 = -240963960;
signed char var_3 = (signed char)-52;
signed char var_6 = (signed char)-113;
unsigned long long int var_8 = 373997983490954970ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)20109;
unsigned short var_16 = (unsigned short)14563;
int var_17 = -441874576;
signed char var_18 = (signed char)84;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
