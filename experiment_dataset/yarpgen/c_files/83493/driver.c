#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11463840588312244260ULL;
unsigned char var_4 = (unsigned char)241;
unsigned long long int var_10 = 7128541115314062320ULL;
unsigned char var_14 = (unsigned char)8;
int zero = 0;
unsigned char var_18 = (unsigned char)97;
signed char var_19 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
