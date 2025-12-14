#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2193811525029169281ULL;
unsigned int var_4 = 1062250082U;
unsigned long long int var_5 = 2562358107865538244ULL;
short var_6 = (short)15144;
long long int var_7 = 2670026464585800378LL;
int var_9 = -2091399884;
short var_11 = (short)8305;
short var_13 = (short)-29821;
unsigned long long int var_15 = 7056148830410600081ULL;
int zero = 0;
signed char var_16 = (signed char)82;
short var_17 = (short)31650;
unsigned int var_18 = 1143461331U;
int var_19 = -1405680908;
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
