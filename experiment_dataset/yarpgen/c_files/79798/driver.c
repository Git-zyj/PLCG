#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7395014390672579650LL;
long long int var_2 = -3717330977164803349LL;
long long int var_3 = 3560205060610585633LL;
signed char var_5 = (signed char)-1;
long long int var_8 = -6788545349540563760LL;
signed char var_9 = (signed char)37;
signed char var_10 = (signed char)-50;
signed char var_13 = (signed char)73;
int zero = 0;
long long int var_15 = 8800951947719106610LL;
long long int var_16 = -3871683819540665755LL;
long long int var_17 = 1732469395026574254LL;
signed char var_18 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
