#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16173086893248575218ULL;
unsigned int var_1 = 4097401264U;
unsigned char var_3 = (unsigned char)237;
short var_4 = (short)-27122;
unsigned long long int var_5 = 1171906914659763462ULL;
unsigned char var_7 = (unsigned char)51;
short var_9 = (short)-5138;
short var_11 = (short)-13426;
int zero = 0;
unsigned int var_12 = 3815968343U;
unsigned int var_13 = 3042794510U;
unsigned int var_14 = 3795719272U;
unsigned char var_15 = (unsigned char)54;
void init() {
}

void checksum() {
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
