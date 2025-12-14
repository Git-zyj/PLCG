#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1117832103;
int var_5 = -1715367440;
int var_9 = 1329168797;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1285898201U;
int zero = 0;
unsigned int var_15 = 2990263461U;
int var_16 = 760827031;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
