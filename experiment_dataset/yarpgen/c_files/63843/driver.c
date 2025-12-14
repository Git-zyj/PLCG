#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3838263810180528225ULL;
int var_2 = -186105729;
signed char var_6 = (signed char)-58;
unsigned int var_11 = 1742139850U;
signed char var_13 = (signed char)14;
int zero = 0;
signed char var_14 = (signed char)33;
signed char var_15 = (signed char)-106;
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
