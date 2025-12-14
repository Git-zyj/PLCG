#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-9;
unsigned char var_7 = (unsigned char)82;
int var_10 = -1895445954;
unsigned char var_14 = (unsigned char)158;
signed char var_15 = (signed char)-26;
int zero = 0;
unsigned char var_19 = (unsigned char)228;
unsigned int var_20 = 4031580908U;
signed char var_21 = (signed char)-109;
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
