#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
unsigned short var_1 = (unsigned short)56504;
short var_7 = (short)-9050;
int zero = 0;
unsigned long long int var_12 = 14041740680733392263ULL;
unsigned long long int var_13 = 16475242824167131094ULL;
unsigned int var_14 = 3328585127U;
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
