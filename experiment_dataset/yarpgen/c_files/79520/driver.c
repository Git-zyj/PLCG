#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13495196547140667242ULL;
unsigned char var_3 = (unsigned char)137;
unsigned char var_9 = (unsigned char)19;
int zero = 0;
unsigned char var_18 = (unsigned char)96;
signed char var_19 = (signed char)125;
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
