#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31244;
_Bool var_1 = (_Bool)0;
short var_3 = (short)4552;
short var_4 = (short)-18534;
_Bool var_5 = (_Bool)0;
long long int var_6 = 9058484868634505773LL;
long long int var_9 = 7498854272880807072LL;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = 2083860818270531867LL;
unsigned char var_12 = (unsigned char)177;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
