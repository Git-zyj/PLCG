#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)83;
short var_4 = (short)29629;
short var_6 = (short)-31616;
long long int var_9 = 1416568834247055461LL;
short var_10 = (short)31872;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-31;
unsigned int var_14 = 574119255U;
int zero = 0;
unsigned char var_16 = (unsigned char)1;
signed char var_17 = (signed char)-20;
short var_18 = (short)13844;
unsigned int var_19 = 2292477817U;
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
