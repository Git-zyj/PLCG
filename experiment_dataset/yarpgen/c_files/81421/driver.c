#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44819;
_Bool var_4 = (_Bool)1;
short var_5 = (short)4924;
signed char var_6 = (signed char)23;
short var_7 = (short)-16543;
long long int var_8 = 4332839282051791676LL;
signed char var_9 = (signed char)110;
int zero = 0;
short var_10 = (short)-13831;
signed char var_11 = (signed char)-75;
unsigned int var_12 = 725874036U;
long long int var_13 = -2804596879831095629LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
