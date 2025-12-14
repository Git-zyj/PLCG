#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3733892435445246383ULL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)-13927;
signed char var_4 = (signed char)-3;
unsigned int var_6 = 3599514713U;
signed char var_8 = (signed char)94;
long long int var_10 = -2168831800044053339LL;
unsigned char var_11 = (unsigned char)112;
int zero = 0;
short var_13 = (short)28109;
short var_14 = (short)-3959;
long long int var_15 = -2699407916189442940LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
