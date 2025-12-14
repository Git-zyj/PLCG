#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2910900410U;
unsigned short var_11 = (unsigned short)36411;
int zero = 0;
long long int var_16 = -1589161979148176879LL;
unsigned char var_17 = (unsigned char)114;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)18;
signed char var_20 = (signed char)-116;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
