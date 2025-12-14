#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
short var_4 = (short)27340;
unsigned int var_6 = 1874226015U;
unsigned long long int var_8 = 8736381061619331012ULL;
int zero = 0;
long long int var_11 = -4695490331974819924LL;
unsigned short var_12 = (unsigned short)42152;
short var_13 = (short)-10296;
unsigned long long int var_14 = 17174047284316545143ULL;
unsigned char var_15 = (unsigned char)216;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
