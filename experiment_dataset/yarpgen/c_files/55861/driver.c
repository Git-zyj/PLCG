#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3919829084U;
int var_4 = -36225122;
unsigned int var_6 = 1464350830U;
signed char var_7 = (signed char)63;
int var_8 = -1356369320;
unsigned int var_11 = 3625333615U;
signed char var_13 = (signed char)-93;
int var_16 = 1373313875;
signed char var_17 = (signed char)-18;
int zero = 0;
int var_18 = 1141222091;
unsigned int var_19 = 3649398128U;
int var_20 = 944227075;
signed char var_21 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
