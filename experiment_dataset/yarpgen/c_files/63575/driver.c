#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)73;
unsigned int var_2 = 2850502550U;
long long int var_4 = 5475413701396439979LL;
int var_6 = -814262990;
unsigned short var_8 = (unsigned short)57075;
signed char var_9 = (signed char)27;
int zero = 0;
unsigned short var_10 = (unsigned short)35029;
unsigned char var_11 = (unsigned char)122;
unsigned char var_12 = (unsigned char)255;
unsigned char var_13 = (unsigned char)103;
unsigned long long int var_14 = 3664144714123229844ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
