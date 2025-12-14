#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)47319;
int var_7 = 1079923109;
signed char var_8 = (signed char)-15;
short var_9 = (short)18955;
short var_10 = (short)28179;
unsigned short var_15 = (unsigned short)37417;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)25513;
signed char var_18 = (signed char)-14;
unsigned long long int var_19 = 16296142678774928562ULL;
signed char var_20 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
