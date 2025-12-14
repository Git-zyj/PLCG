#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7268578337634250895LL;
unsigned long long int var_6 = 496749807362879686ULL;
unsigned long long int var_7 = 2199940806879963988ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 6847404937270525602LL;
unsigned long long int var_14 = 8406207230328633888ULL;
long long int var_15 = 5788538309647863530LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
