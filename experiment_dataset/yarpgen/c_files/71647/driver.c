#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11029879855005640323ULL;
unsigned short var_4 = (unsigned short)40494;
unsigned char var_5 = (unsigned char)45;
unsigned long long int var_6 = 13258797729188825694ULL;
unsigned char var_7 = (unsigned char)25;
unsigned short var_8 = (unsigned short)21845;
unsigned short var_10 = (unsigned short)57289;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 4137939460U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
