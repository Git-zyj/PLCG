#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62654;
short var_2 = (short)-18875;
int var_6 = 380551364;
int var_9 = 437553004;
short var_10 = (short)18389;
signed char var_11 = (signed char)29;
short var_13 = (short)7012;
int zero = 0;
signed char var_15 = (signed char)-93;
int var_16 = -895941695;
int var_17 = 87200791;
short var_18 = (short)-4383;
short var_19 = (short)25848;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
