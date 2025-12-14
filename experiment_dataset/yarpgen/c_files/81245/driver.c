#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -63651032;
int var_4 = 1396925254;
unsigned short var_6 = (unsigned short)59467;
signed char var_7 = (signed char)-101;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1838266603U;
signed char var_14 = (signed char)114;
signed char var_15 = (signed char)37;
int zero = 0;
unsigned char var_16 = (unsigned char)104;
signed char var_17 = (signed char)79;
int var_18 = 1997201955;
signed char var_19 = (signed char)-52;
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
