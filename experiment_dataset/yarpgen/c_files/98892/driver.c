#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 609383838;
short var_2 = (short)1095;
signed char var_3 = (signed char)94;
signed char var_6 = (signed char)-69;
unsigned int var_9 = 667822596U;
unsigned int var_11 = 467258653U;
int zero = 0;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)-14;
long long int var_17 = 3419613434710381135LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
