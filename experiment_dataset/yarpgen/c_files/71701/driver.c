#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17411;
unsigned short var_2 = (unsigned short)57486;
unsigned char var_3 = (unsigned char)143;
unsigned long long int var_4 = 4147101431414711941ULL;
int var_7 = 2018778596;
unsigned short var_8 = (unsigned short)21942;
long long int var_10 = 150465803219251204LL;
long long int var_12 = 6850306243463549224LL;
int zero = 0;
unsigned long long int var_14 = 94952342738557914ULL;
signed char var_15 = (signed char)-45;
signed char var_16 = (signed char)33;
signed char var_17 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
