#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-11073;
unsigned long long int var_9 = 2422451978497357556ULL;
short var_16 = (short)17908;
int zero = 0;
int var_18 = -565898361;
unsigned short var_19 = (unsigned short)50241;
unsigned char var_20 = (unsigned char)234;
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
