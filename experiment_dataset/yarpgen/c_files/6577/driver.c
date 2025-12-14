#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16405441489765240414ULL;
unsigned int var_1 = 944116216U;
int var_3 = -1229841085;
unsigned long long int var_4 = 14480601603946557326ULL;
long long int var_10 = 204139989662372151LL;
unsigned int var_15 = 2787630581U;
int zero = 0;
unsigned short var_16 = (unsigned short)35331;
unsigned int var_17 = 93289993U;
signed char var_18 = (signed char)58;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
