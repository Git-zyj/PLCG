#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)247;
signed char var_2 = (signed char)72;
unsigned char var_3 = (unsigned char)115;
unsigned char var_5 = (unsigned char)155;
unsigned short var_6 = (unsigned short)39532;
unsigned long long int var_8 = 13310030958500307071ULL;
unsigned long long int var_10 = 1301389274355863451ULL;
int zero = 0;
signed char var_12 = (signed char)-16;
int var_13 = -75641671;
int var_14 = 1303252377;
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
