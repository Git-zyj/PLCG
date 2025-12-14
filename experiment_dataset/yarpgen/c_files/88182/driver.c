#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2791295700804922168LL;
signed char var_8 = (signed char)27;
long long int var_15 = 4462076940289688294LL;
int zero = 0;
unsigned int var_20 = 3249889376U;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)59937;
unsigned int var_23 = 2584458238U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
