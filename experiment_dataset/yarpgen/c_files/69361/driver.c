#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10024398007825912266ULL;
signed char var_2 = (signed char)96;
unsigned short var_5 = (unsigned short)59359;
signed char var_8 = (signed char)-62;
short var_9 = (short)-11219;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)9518;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
