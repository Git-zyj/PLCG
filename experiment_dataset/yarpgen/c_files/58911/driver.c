#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13243260944721315224ULL;
signed char var_10 = (signed char)-124;
unsigned char var_14 = (unsigned char)106;
int zero = 0;
unsigned char var_15 = (unsigned char)18;
long long int var_16 = -8047189378046557197LL;
unsigned char var_17 = (unsigned char)177;
unsigned long long int var_18 = 3760459875348260045ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
