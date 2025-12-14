#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2634843132992903672LL;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)61;
short var_7 = (short)-27744;
short var_8 = (short)31012;
short var_11 = (short)28598;
short var_12 = (short)-19436;
long long int var_14 = 8553982780775291086LL;
int zero = 0;
short var_15 = (short)-9433;
short var_16 = (short)-27275;
unsigned char var_17 = (unsigned char)17;
void init() {
}

void checksum() {
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
