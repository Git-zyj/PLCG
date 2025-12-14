#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29880;
unsigned long long int var_8 = 17087131856019889913ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)234;
unsigned short var_19 = (unsigned short)778;
unsigned char var_20 = (unsigned char)11;
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
