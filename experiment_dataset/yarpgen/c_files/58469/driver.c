#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)20;
long long int var_11 = -671646785413656841LL;
signed char var_12 = (signed char)-119;
int zero = 0;
long long int var_18 = -5120068791293150354LL;
_Bool var_19 = (_Bool)1;
short var_20 = (short)7099;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
