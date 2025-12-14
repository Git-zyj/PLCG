#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7268038159134093028LL;
unsigned char var_6 = (unsigned char)30;
short var_7 = (short)6069;
unsigned long long int var_8 = 12487822600671025432ULL;
int var_9 = 443398676;
int zero = 0;
unsigned int var_10 = 2872999330U;
unsigned short var_11 = (unsigned short)26027;
unsigned long long int var_12 = 3258795538426571199ULL;
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
