#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)38114;
long long int var_4 = 2403490243336282358LL;
signed char var_5 = (signed char)119;
unsigned long long int var_9 = 8117487614306901847ULL;
unsigned long long int var_10 = 13338352143816492659ULL;
long long int var_12 = 6943922557771454402LL;
unsigned int var_13 = 3455129560U;
unsigned long long int var_14 = 17573481822362841391ULL;
int zero = 0;
unsigned long long int var_16 = 7813633785898150336ULL;
unsigned char var_17 = (unsigned char)173;
unsigned int var_18 = 4292936179U;
unsigned long long int var_19 = 3095481964787302983ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
