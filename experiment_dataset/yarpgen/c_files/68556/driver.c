#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 16563286371788357908ULL;
unsigned short var_10 = (unsigned short)28048;
int var_19 = 1770242430;
int zero = 0;
int var_20 = 1244364770;
unsigned char var_21 = (unsigned char)53;
void init() {
}

void checksum() {
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
