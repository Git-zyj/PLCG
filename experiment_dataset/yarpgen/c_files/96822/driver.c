#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3577077348U;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 3497700201U;
unsigned int var_9 = 140071592U;
int zero = 0;
signed char var_17 = (signed char)-109;
short var_18 = (short)1501;
void init() {
}

void checksum() {
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
