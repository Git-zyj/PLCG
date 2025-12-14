#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)31114;
long long int var_6 = -1152283733154845582LL;
unsigned long long int var_9 = 13577243392109810545ULL;
long long int var_12 = 7081773727798820130LL;
unsigned short var_13 = (unsigned short)4220;
int zero = 0;
signed char var_14 = (signed char)69;
unsigned int var_15 = 3255520608U;
long long int var_16 = 7507351801923020511LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
