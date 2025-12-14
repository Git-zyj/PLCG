#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10814;
short var_3 = (short)-13495;
unsigned char var_7 = (unsigned char)243;
short var_9 = (short)30710;
short var_12 = (short)-20164;
signed char var_13 = (signed char)85;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_16 = 3910455859149342145LL;
signed char var_17 = (signed char)29;
unsigned int var_18 = 2957628321U;
long long int var_19 = 145098053625810739LL;
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
