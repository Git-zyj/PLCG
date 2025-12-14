#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14743405045648205879ULL;
unsigned long long int var_9 = 1360156713351456331ULL;
short var_11 = (short)-5709;
int zero = 0;
unsigned int var_19 = 4290707698U;
unsigned char var_20 = (unsigned char)74;
void init() {
}

void checksum() {
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
