#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -79713668;
signed char var_1 = (signed char)9;
unsigned char var_2 = (unsigned char)155;
int var_10 = 154213454;
unsigned long long int var_12 = 8627291396917113551ULL;
int zero = 0;
long long int var_15 = 2537583566465262142LL;
short var_16 = (short)-9820;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)162;
long long int var_19 = 5841060739374419332LL;
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
