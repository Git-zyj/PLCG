#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 798024003;
_Bool var_4 = (_Bool)1;
int var_6 = -1156069368;
int var_8 = 1707600917;
unsigned short var_14 = (unsigned short)65144;
int var_15 = -1560479946;
unsigned short var_17 = (unsigned short)22632;
int zero = 0;
long long int var_18 = -969521689396076083LL;
long long int var_19 = 4928877591503846901LL;
_Bool var_20 = (_Bool)1;
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
