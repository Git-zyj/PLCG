#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13016586935467822423ULL;
_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)4872;
signed char var_6 = (signed char)95;
unsigned char var_9 = (unsigned char)18;
short var_10 = (short)2294;
int zero = 0;
int var_11 = 953964237;
short var_12 = (short)-18755;
short var_13 = (short)24211;
long long int var_14 = 8436089415377934809LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
