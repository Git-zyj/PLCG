#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1287117869U;
unsigned long long int var_2 = 3629419481788326629ULL;
int var_5 = -218090251;
signed char var_9 = (signed char)-25;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = -4482164757312059426LL;
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
