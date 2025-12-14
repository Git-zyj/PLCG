#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3899622810U;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1400087129U;
unsigned long long int var_5 = 8004036589289166702ULL;
signed char var_7 = (signed char)-104;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)38;
short var_12 = (short)26569;
unsigned long long int var_13 = 4555819649930884650ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
