#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_3 = (short)28300;
signed char var_5 = (signed char)-25;
signed char var_9 = (signed char)32;
signed char var_10 = (signed char)7;
int zero = 0;
unsigned int var_13 = 2721817658U;
unsigned int var_14 = 298536818U;
unsigned short var_15 = (unsigned short)20688;
void init() {
}

void checksum() {
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
