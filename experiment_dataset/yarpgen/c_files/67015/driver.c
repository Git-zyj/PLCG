#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3822770932256320161ULL;
unsigned long long int var_5 = 8131929125868821973ULL;
int var_6 = 1055637155;
int var_7 = -126313156;
int var_8 = -2031316918;
unsigned char var_10 = (unsigned char)169;
short var_11 = (short)30399;
unsigned short var_12 = (unsigned short)53701;
int zero = 0;
unsigned short var_13 = (unsigned short)5708;
short var_14 = (short)21214;
short var_15 = (short)16946;
unsigned short var_16 = (unsigned short)62607;
int var_17 = -98587284;
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
