#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2023041267702753659LL;
unsigned char var_4 = (unsigned char)108;
unsigned char var_9 = (unsigned char)183;
int zero = 0;
unsigned long long int var_12 = 17490443023283261946ULL;
unsigned long long int var_13 = 9684864579217610748ULL;
unsigned short var_14 = (unsigned short)62413;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
