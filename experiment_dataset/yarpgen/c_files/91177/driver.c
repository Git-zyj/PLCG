#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1394691020U;
unsigned char var_1 = (unsigned char)155;
unsigned int var_7 = 2693802574U;
signed char var_8 = (signed char)-84;
int zero = 0;
long long int var_15 = -7423994782997032072LL;
long long int var_16 = 6619657019614260748LL;
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
