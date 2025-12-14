#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-112;
_Bool var_4 = (_Bool)1;
unsigned int var_10 = 2411069649U;
int var_11 = 1844500098;
unsigned short var_12 = (unsigned short)48142;
signed char var_14 = (signed char)97;
unsigned int var_15 = 527996140U;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1042402252U;
unsigned long long int var_19 = 10867607477026886678ULL;
void init() {
}

void checksum() {
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
