#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
int var_1 = 1849641478;
unsigned int var_2 = 1585962375U;
short var_3 = (short)2565;
unsigned long long int var_4 = 7354190606104795179ULL;
int var_5 = 939479164;
long long int var_8 = -8958226829752492154LL;
unsigned char var_13 = (unsigned char)0;
unsigned long long int var_17 = 13001793460876056571ULL;
int zero = 0;
unsigned int var_19 = 3078867316U;
unsigned short var_20 = (unsigned short)35424;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
