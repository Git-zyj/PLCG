#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51264;
unsigned long long int var_5 = 9151008574672763670ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)52866;
short var_11 = (short)-27240;
unsigned long long int var_12 = 3760590546279221002ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
