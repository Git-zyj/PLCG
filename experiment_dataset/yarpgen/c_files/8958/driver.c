#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3911031725U;
unsigned int var_8 = 2251805984U;
unsigned int var_10 = 527479854U;
_Bool var_11 = (_Bool)1;
unsigned char var_13 = (unsigned char)16;
int zero = 0;
long long int var_14 = -3083659101850392130LL;
short var_15 = (short)-24466;
void init() {
}

void checksum() {
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
