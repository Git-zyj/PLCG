#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)65;
unsigned char var_5 = (unsigned char)243;
signed char var_9 = (signed char)-88;
signed char var_12 = (signed char)109;
int zero = 0;
unsigned short var_15 = (unsigned short)4492;
signed char var_16 = (signed char)89;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
