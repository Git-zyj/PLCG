#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)56;
long long int var_6 = -4660286622700205721LL;
unsigned char var_10 = (unsigned char)189;
int var_11 = 1757981360;
int zero = 0;
long long int var_12 = 8176839619520227560LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = -147352619437262816LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
