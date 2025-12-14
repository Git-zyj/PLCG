#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18371;
signed char var_2 = (signed char)-69;
signed char var_3 = (signed char)-13;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-27903;
long long int var_9 = -4908611666171396206LL;
short var_11 = (short)19242;
short var_13 = (short)-6982;
int zero = 0;
signed char var_14 = (signed char)-6;
unsigned short var_15 = (unsigned short)20884;
unsigned long long int var_16 = 10017168939944561326ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
