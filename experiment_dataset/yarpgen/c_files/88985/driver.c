#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8974;
short var_9 = (short)-31038;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_15 = (short)-15347;
int var_16 = 667506405;
unsigned long long int var_17 = 15868146675888619025ULL;
int var_18 = 176214801;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
