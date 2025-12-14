#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3513557624U;
short var_6 = (short)-14279;
long long int var_8 = 1090430019365161853LL;
unsigned char var_9 = (unsigned char)109;
int zero = 0;
long long int var_10 = 3014217096161946216LL;
long long int var_11 = 2086954483784977664LL;
long long int var_12 = -4345636157383835636LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
