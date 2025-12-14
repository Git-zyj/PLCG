#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 2787599097607469203LL;
unsigned int var_7 = 317760791U;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_15 = 90256657;
unsigned char var_16 = (unsigned char)39;
unsigned int var_17 = 3636596373U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
