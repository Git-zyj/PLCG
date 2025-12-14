#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 24353835060043105ULL;
unsigned short var_7 = (unsigned short)51266;
unsigned long long int var_8 = 4106445502719151741ULL;
int zero = 0;
unsigned int var_10 = 996048588U;
unsigned long long int var_11 = 1146056999878077339ULL;
unsigned int var_12 = 3683333043U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
