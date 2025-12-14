#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)112;
unsigned char var_3 = (unsigned char)105;
unsigned char var_6 = (unsigned char)250;
signed char var_8 = (signed char)7;
signed char var_10 = (signed char)-106;
int zero = 0;
signed char var_19 = (signed char)-102;
signed char var_20 = (signed char)-105;
unsigned char var_21 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
