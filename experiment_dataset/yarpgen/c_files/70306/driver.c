#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)59;
short var_8 = (short)-31475;
_Bool var_9 = (_Bool)1;
long long int var_17 = 6756995426295593222LL;
int zero = 0;
long long int var_20 = -3467954163904563104LL;
short var_21 = (short)-31950;
short var_22 = (short)14816;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
