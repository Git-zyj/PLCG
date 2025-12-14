#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)43;
signed char var_2 = (signed char)84;
signed char var_4 = (signed char)64;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-22358;
_Bool var_8 = (_Bool)0;
long long int var_10 = 3977816068377684353LL;
int zero = 0;
long long int var_11 = 9100967539264047001LL;
signed char var_12 = (signed char)-8;
short var_13 = (short)17497;
long long int var_14 = -8865930808529310973LL;
long long int var_15 = -7849096455428273456LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
