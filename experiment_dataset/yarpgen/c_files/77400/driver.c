#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 345367688;
unsigned short var_3 = (unsigned short)54299;
unsigned int var_5 = 1969731627U;
short var_8 = (short)-3381;
unsigned long long int var_11 = 2105869781953402415ULL;
int zero = 0;
unsigned long long int var_12 = 992561435965610139ULL;
unsigned long long int var_13 = 14852438383323659273ULL;
unsigned char var_14 = (unsigned char)114;
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
