#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)8893;
unsigned int var_4 = 2687661784U;
short var_5 = (short)17181;
long long int var_7 = -3995768885806005387LL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3767460526U;
unsigned int var_14 = 2735400092U;
int zero = 0;
unsigned char var_17 = (unsigned char)43;
unsigned int var_18 = 241767642U;
signed char var_19 = (signed char)-21;
long long int var_20 = -892333501451454414LL;
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
