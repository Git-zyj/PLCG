#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)38;
unsigned int var_5 = 1745856674U;
int var_6 = -405761872;
signed char var_7 = (signed char)21;
signed char var_10 = (signed char)116;
unsigned int var_13 = 2232386360U;
int zero = 0;
unsigned char var_15 = (unsigned char)194;
unsigned long long int var_16 = 17346092022657234623ULL;
signed char var_17 = (signed char)-117;
int var_18 = -154207087;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
