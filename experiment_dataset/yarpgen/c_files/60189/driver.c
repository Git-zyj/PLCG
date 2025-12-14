#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1413241553;
unsigned long long int var_8 = 15781566900993309293ULL;
int var_12 = 1398927247;
int var_17 = -1612426913;
int zero = 0;
unsigned long long int var_18 = 4961044080237832388ULL;
unsigned char var_19 = (unsigned char)185;
short var_20 = (short)15620;
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
