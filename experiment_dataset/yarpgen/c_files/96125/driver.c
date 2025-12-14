#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 484736375;
int var_3 = -1678971603;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)42291;
long long int var_9 = 3249698084021861818LL;
unsigned char var_15 = (unsigned char)170;
signed char var_16 = (signed char)-71;
int zero = 0;
unsigned char var_17 = (unsigned char)222;
int var_18 = -560067421;
unsigned long long int var_19 = 327341704777863352ULL;
unsigned char var_20 = (unsigned char)64;
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
