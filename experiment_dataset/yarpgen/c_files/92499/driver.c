#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9676642039906319702ULL;
unsigned long long int var_2 = 17439080256745192694ULL;
unsigned int var_7 = 3955271585U;
unsigned long long int var_8 = 16142205656764314794ULL;
unsigned short var_13 = (unsigned short)3269;
unsigned int var_18 = 1224719031U;
int zero = 0;
long long int var_19 = 2573840326948863853LL;
unsigned char var_20 = (unsigned char)38;
signed char var_21 = (signed char)-51;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
