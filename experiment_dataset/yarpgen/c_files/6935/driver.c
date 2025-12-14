#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3239352458U;
unsigned char var_4 = (unsigned char)11;
unsigned char var_7 = (unsigned char)224;
int var_10 = -1375437366;
int var_11 = 2036761182;
int zero = 0;
int var_17 = 642511260;
unsigned int var_18 = 390242548U;
unsigned int var_19 = 1758903461U;
unsigned char var_20 = (unsigned char)124;
void init() {
}

void checksum() {
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
