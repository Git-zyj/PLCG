#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-23767;
signed char var_5 = (signed char)-29;
signed char var_7 = (signed char)77;
short var_8 = (short)26683;
short var_9 = (short)-4544;
unsigned long long int var_10 = 17153468608914548234ULL;
int zero = 0;
unsigned long long int var_11 = 10616986118311930117ULL;
unsigned long long int var_12 = 499133260192377220ULL;
unsigned char var_13 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
