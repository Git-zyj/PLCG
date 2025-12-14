#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25413;
unsigned short var_3 = (unsigned short)20401;
signed char var_6 = (signed char)-126;
short var_8 = (short)8373;
unsigned long long int var_9 = 16402097111276700200ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)52323;
short var_14 = (short)1970;
unsigned char var_15 = (unsigned char)199;
int zero = 0;
short var_17 = (short)-12972;
short var_18 = (short)26508;
unsigned long long int var_19 = 2303638066236645484ULL;
long long int var_20 = -1649143076210886746LL;
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
