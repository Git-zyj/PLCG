#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)46;
signed char var_2 = (signed char)-80;
signed char var_4 = (signed char)-112;
unsigned short var_6 = (unsigned short)39988;
int var_7 = 670542818;
unsigned long long int var_9 = 16452494376271939118ULL;
short var_12 = (short)-3321;
unsigned char var_13 = (unsigned char)162;
unsigned short var_14 = (unsigned short)46548;
int zero = 0;
short var_16 = (short)8491;
int var_17 = 1548352931;
long long int var_18 = -319405649375501334LL;
void init() {
}

void checksum() {
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
