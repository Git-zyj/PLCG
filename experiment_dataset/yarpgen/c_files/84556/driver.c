#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1960145441838332861LL;
unsigned long long int var_9 = 2746678810431491064ULL;
unsigned char var_13 = (unsigned char)198;
int zero = 0;
unsigned long long int var_14 = 6747566742159930749ULL;
unsigned char var_15 = (unsigned char)104;
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
