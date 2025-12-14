#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)79;
int var_4 = 700403763;
unsigned long long int var_5 = 1605779894058507184ULL;
unsigned char var_8 = (unsigned char)184;
unsigned long long int var_9 = 5948451066044423875ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)229;
int var_12 = 2027516703;
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
