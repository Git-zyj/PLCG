#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7894545813024224229LL;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)28;
int var_15 = -663991820;
int zero = 0;
unsigned char var_17 = (unsigned char)60;
int var_18 = 831154948;
unsigned int var_19 = 2802577406U;
unsigned long long int var_20 = 15782794669283403443ULL;
unsigned int var_21 = 3088146945U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
