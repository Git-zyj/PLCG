#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 967548015U;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)109;
unsigned int var_15 = 209600385U;
short var_16 = (short)-30003;
long long int var_19 = 6977222896076136607LL;
int zero = 0;
short var_20 = (short)4593;
unsigned long long int var_21 = 2374393654950852082ULL;
void init() {
}

void checksum() {
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
