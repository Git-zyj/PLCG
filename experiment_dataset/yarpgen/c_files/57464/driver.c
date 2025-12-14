#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6100365901711926805LL;
signed char var_1 = (signed char)-98;
unsigned long long int var_3 = 5307470317852172560ULL;
unsigned char var_6 = (unsigned char)158;
int zero = 0;
unsigned long long int var_10 = 12650461395168860681ULL;
int var_11 = -1124030576;
unsigned char var_12 = (unsigned char)109;
signed char var_13 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
