#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)36;
int var_7 = -1847350260;
unsigned char var_11 = (unsigned char)208;
signed char var_13 = (signed char)21;
int zero = 0;
unsigned long long int var_17 = 1566083338638997636ULL;
short var_18 = (short)-8507;
void init() {
}

void checksum() {
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
