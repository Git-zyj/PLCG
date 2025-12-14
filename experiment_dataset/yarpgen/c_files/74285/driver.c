#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
short var_1 = (short)-29264;
signed char var_2 = (signed char)54;
long long int var_4 = -5353931591310205604LL;
unsigned int var_5 = 470457077U;
unsigned int var_7 = 4065852349U;
long long int var_8 = -6551396903240921597LL;
signed char var_11 = (signed char)-16;
int zero = 0;
short var_12 = (short)-7132;
_Bool var_13 = (_Bool)0;
long long int var_14 = -3414258231418318422LL;
unsigned char var_15 = (unsigned char)0;
signed char var_16 = (signed char)-11;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
