#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10350089327908953203ULL;
long long int var_1 = 5836885222067816553LL;
unsigned int var_2 = 3914527401U;
signed char var_3 = (signed char)21;
short var_4 = (short)9897;
unsigned short var_5 = (unsigned short)61039;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-10924;
short var_9 = (short)301;
unsigned short var_11 = (unsigned short)61943;
unsigned char var_12 = (unsigned char)243;
int zero = 0;
unsigned long long int var_13 = 10017867147207721341ULL;
unsigned long long int var_14 = 17361571521239739718ULL;
signed char var_15 = (signed char)-55;
unsigned long long int var_16 = 14816255538990097642ULL;
signed char var_17 = (signed char)88;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
