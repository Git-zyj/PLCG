#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
unsigned long long int var_1 = 8302215828143362838ULL;
unsigned long long int var_2 = 8469623680067658065ULL;
short var_4 = (short)-6595;
short var_6 = (short)25077;
unsigned long long int var_7 = 7038198539101315562ULL;
unsigned char var_8 = (unsigned char)151;
unsigned long long int var_10 = 12906153413478185579ULL;
int zero = 0;
unsigned int var_11 = 3808054433U;
unsigned long long int var_12 = 15801493117061663736ULL;
short var_13 = (short)19089;
unsigned char var_14 = (unsigned char)218;
short var_15 = (short)-13018;
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
