#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_3 = (short)-28288;
int var_5 = -381477118;
unsigned short var_6 = (unsigned short)51850;
short var_9 = (short)32515;
int zero = 0;
unsigned int var_20 = 2165301152U;
unsigned short var_21 = (unsigned short)46010;
void init() {
}

void checksum() {
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
