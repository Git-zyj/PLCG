#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3231307025U;
unsigned int var_5 = 784525892U;
signed char var_7 = (signed char)-55;
unsigned long long int var_12 = 278344194691143812ULL;
int zero = 0;
unsigned int var_18 = 210494298U;
unsigned short var_19 = (unsigned short)9047;
signed char var_20 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
