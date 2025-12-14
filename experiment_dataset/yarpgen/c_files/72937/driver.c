#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 85756830990775601ULL;
unsigned char var_6 = (unsigned char)221;
int var_8 = 374291015;
int var_9 = 744400992;
unsigned int var_12 = 2454208706U;
int var_13 = -230808159;
unsigned int var_14 = 30880199U;
unsigned char var_15 = (unsigned char)211;
int zero = 0;
int var_18 = -811994049;
long long int var_19 = 1066243050040450312LL;
signed char var_20 = (signed char)69;
unsigned int var_21 = 1235204557U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
