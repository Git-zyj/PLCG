#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)4891;
long long int var_2 = -6481141283597185792LL;
unsigned long long int var_6 = 3636586910356532525ULL;
unsigned short var_8 = (unsigned short)26529;
unsigned char var_9 = (unsigned char)97;
int var_16 = 331349032;
int zero = 0;
unsigned short var_20 = (unsigned short)7036;
long long int var_21 = 4205038382761013059LL;
unsigned char var_22 = (unsigned char)83;
unsigned short var_23 = (unsigned short)17939;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
