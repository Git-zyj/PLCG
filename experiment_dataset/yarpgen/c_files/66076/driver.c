#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2318897648U;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-11803;
int zero = 0;
unsigned int var_14 = 556250147U;
unsigned int var_15 = 1543167659U;
long long int var_16 = 1264978806075229973LL;
long long int var_17 = -8094096688867535063LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
