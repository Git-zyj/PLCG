#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)208;
short var_5 = (short)11417;
unsigned char var_7 = (unsigned char)196;
int var_9 = -251504616;
short var_14 = (short)-17325;
int zero = 0;
unsigned char var_18 = (unsigned char)167;
short var_19 = (short)24649;
unsigned char var_20 = (unsigned char)224;
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
