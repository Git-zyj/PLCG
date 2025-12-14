#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)29;
unsigned long long int var_9 = 886594094232469775ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
long long int var_11 = -4905068713566557103LL;
unsigned long long int var_12 = 8277667948969294169ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
