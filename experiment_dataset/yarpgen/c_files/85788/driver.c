#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-122;
int var_2 = 692129672;
_Bool var_4 = (_Bool)0;
int var_5 = -979785447;
signed char var_7 = (signed char)124;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = 536066196;
unsigned char var_11 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
