#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 18326671245666310262ULL;
unsigned char var_8 = (unsigned char)211;
signed char var_9 = (signed char)-106;
int zero = 0;
unsigned long long int var_10 = 13004089260876304381ULL;
long long int var_11 = -4628871197854510458LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
