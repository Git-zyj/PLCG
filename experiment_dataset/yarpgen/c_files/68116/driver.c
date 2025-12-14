#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 3578985644707975169ULL;
short var_8 = (short)-11842;
signed char var_10 = (signed char)-55;
short var_17 = (short)-17573;
int zero = 0;
signed char var_18 = (signed char)-41;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3709763028U;
unsigned char var_21 = (unsigned char)226;
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
