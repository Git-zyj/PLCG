#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8789075934330712567ULL;
long long int var_5 = 5146909018325921205LL;
unsigned long long int var_6 = 9628083912937576304ULL;
unsigned int var_8 = 3558842961U;
unsigned char var_11 = (unsigned char)216;
unsigned char var_12 = (unsigned char)103;
unsigned char var_16 = (unsigned char)16;
int zero = 0;
signed char var_17 = (signed char)-76;
unsigned char var_18 = (unsigned char)103;
unsigned short var_19 = (unsigned short)60046;
signed char var_20 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
