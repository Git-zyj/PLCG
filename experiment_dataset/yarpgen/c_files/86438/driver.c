#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
unsigned char var_2 = (unsigned char)140;
unsigned int var_3 = 2318809976U;
unsigned char var_4 = (unsigned char)222;
unsigned long long int var_5 = 650752622486498622ULL;
int var_6 = -1219311186;
signed char var_8 = (signed char)-17;
unsigned short var_10 = (unsigned short)39507;
unsigned char var_13 = (unsigned char)3;
int zero = 0;
long long int var_16 = 6807149336127938945LL;
unsigned char var_17 = (unsigned char)122;
unsigned char var_18 = (unsigned char)109;
unsigned char var_19 = (unsigned char)79;
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
