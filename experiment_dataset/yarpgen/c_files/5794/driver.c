#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)36;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-65;
short var_13 = (short)6318;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-27661;
unsigned int var_18 = 651784759U;
void init() {
}

void checksum() {
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
