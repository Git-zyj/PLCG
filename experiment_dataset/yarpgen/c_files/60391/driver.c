#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2137571739;
short var_1 = (short)-466;
unsigned int var_7 = 2182059315U;
signed char var_11 = (signed char)93;
int var_16 = 2135152463;
long long int var_19 = -796791343996673206LL;
int zero = 0;
unsigned long long int var_20 = 13327632609670366388ULL;
signed char var_21 = (signed char)-52;
unsigned char var_22 = (unsigned char)210;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)137;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
