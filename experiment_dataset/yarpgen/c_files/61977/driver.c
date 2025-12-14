#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 309201083U;
unsigned long long int var_8 = 17527414009398651994ULL;
unsigned short var_9 = (unsigned short)61688;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)0;
long long int var_15 = 2610024749563259130LL;
int zero = 0;
signed char var_19 = (signed char)-30;
signed char var_20 = (signed char)-51;
signed char var_21 = (signed char)-33;
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
