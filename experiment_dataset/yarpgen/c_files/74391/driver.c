#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1573874642;
_Bool var_4 = (_Bool)0;
unsigned char var_8 = (unsigned char)154;
long long int var_9 = -985259802024305076LL;
unsigned short var_14 = (unsigned short)19024;
int zero = 0;
signed char var_18 = (signed char)30;
unsigned long long int var_19 = 17617943125674440055ULL;
unsigned char var_20 = (unsigned char)135;
int var_21 = 1802515261;
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
