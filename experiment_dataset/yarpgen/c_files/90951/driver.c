#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)78;
unsigned short var_6 = (unsigned short)47652;
unsigned char var_9 = (unsigned char)39;
signed char var_11 = (signed char)79;
short var_12 = (short)-25569;
unsigned short var_16 = (unsigned short)5042;
int zero = 0;
unsigned char var_19 = (unsigned char)73;
signed char var_20 = (signed char)70;
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
