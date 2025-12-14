#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21680;
int var_2 = -1644400182;
unsigned char var_3 = (unsigned char)245;
unsigned short var_6 = (unsigned short)58325;
unsigned char var_10 = (unsigned char)2;
int zero = 0;
unsigned char var_20 = (unsigned char)49;
unsigned long long int var_21 = 8811084201768773366ULL;
long long int var_22 = 2896237310285020238LL;
unsigned long long int var_23 = 9263411019021633121ULL;
short var_24 = (short)-22818;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
