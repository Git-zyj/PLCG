#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
unsigned int var_2 = 1280828728U;
long long int var_3 = -2256385807870431933LL;
unsigned char var_4 = (unsigned char)103;
unsigned int var_5 = 322167587U;
unsigned long long int var_6 = 1469770497434642601ULL;
unsigned short var_8 = (unsigned short)26160;
signed char var_10 = (signed char)-118;
unsigned int var_11 = 3536762420U;
signed char var_12 = (signed char)112;
int zero = 0;
short var_13 = (short)-16402;
signed char var_14 = (signed char)38;
short var_15 = (short)-28850;
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
