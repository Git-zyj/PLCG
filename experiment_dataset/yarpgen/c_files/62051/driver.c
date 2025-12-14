#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)31890;
short var_2 = (short)-28971;
signed char var_6 = (signed char)29;
int var_9 = 1350442232;
_Bool var_10 = (_Bool)0;
long long int var_11 = -7323489029007235283LL;
short var_12 = (short)12947;
int zero = 0;
short var_13 = (short)31534;
short var_14 = (short)-10743;
long long int var_15 = -7675013986866865579LL;
long long int var_16 = 823169230284489115LL;
void init() {
}

void checksum() {
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
