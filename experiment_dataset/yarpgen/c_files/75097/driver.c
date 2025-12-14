#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10560901566744266720ULL;
int var_2 = -8628143;
signed char var_3 = (signed char)-117;
int var_4 = -1674350977;
long long int var_9 = -6215489173021799307LL;
int var_12 = 364775513;
unsigned char var_15 = (unsigned char)182;
int zero = 0;
unsigned short var_17 = (unsigned short)22620;
short var_18 = (short)11501;
void init() {
}

void checksum() {
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
