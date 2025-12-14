#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-104;
short var_6 = (short)13373;
unsigned char var_13 = (unsigned char)132;
long long int var_14 = 7897051245933154624LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_19 = (short)-4708;
unsigned long long int var_20 = 174678788918385039ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
