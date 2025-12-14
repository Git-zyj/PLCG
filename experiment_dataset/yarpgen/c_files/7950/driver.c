#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2490106570748074924LL;
signed char var_7 = (signed char)31;
unsigned long long int var_9 = 4911132895026597706ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_16 = 7529745255533562399ULL;
int zero = 0;
short var_17 = (short)-25104;
unsigned long long int var_18 = 10390985209286635309ULL;
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
