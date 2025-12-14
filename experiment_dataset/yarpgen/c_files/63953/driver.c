#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1638289356;
unsigned short var_2 = (unsigned short)28175;
int var_5 = -1881407278;
short var_6 = (short)-12047;
unsigned char var_7 = (unsigned char)155;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_13 = (short)10732;
unsigned long long int var_14 = 11701641488732490306ULL;
short var_15 = (short)-27169;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
