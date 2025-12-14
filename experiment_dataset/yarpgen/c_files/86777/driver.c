#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2774084051325584803ULL;
short var_9 = (short)26838;
_Bool var_10 = (_Bool)0;
unsigned short var_13 = (unsigned short)2293;
int zero = 0;
unsigned int var_15 = 2496428234U;
signed char var_16 = (signed char)70;
void init() {
}

void checksum() {
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
