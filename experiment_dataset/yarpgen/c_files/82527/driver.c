#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)22392;
unsigned long long int var_8 = 4827717054960565617ULL;
short var_10 = (short)26619;
int zero = 0;
unsigned int var_12 = 1566354139U;
unsigned short var_13 = (unsigned short)50745;
unsigned long long int var_14 = 11707498840927549825ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
