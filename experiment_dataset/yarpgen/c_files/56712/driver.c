#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)120;
unsigned char var_2 = (unsigned char)71;
unsigned char var_5 = (unsigned char)110;
unsigned char var_7 = (unsigned char)142;
unsigned char var_9 = (unsigned char)81;
unsigned char var_11 = (unsigned char)109;
unsigned char var_14 = (unsigned char)67;
unsigned char var_15 = (unsigned char)159;
unsigned char var_16 = (unsigned char)102;
int zero = 0;
unsigned char var_18 = (unsigned char)137;
unsigned char var_19 = (unsigned char)38;
unsigned char var_20 = (unsigned char)74;
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
