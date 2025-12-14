#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1536768432444067429ULL;
unsigned char var_7 = (unsigned char)25;
unsigned char var_10 = (unsigned char)71;
int zero = 0;
unsigned short var_11 = (unsigned short)62599;
unsigned int var_12 = 2589756123U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
