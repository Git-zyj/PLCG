#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25596;
unsigned int var_2 = 2968134752U;
unsigned short var_4 = (unsigned short)32564;
int var_5 = -163820610;
short var_6 = (short)14903;
short var_10 = (short)26613;
unsigned short var_11 = (unsigned short)40348;
int var_12 = 1550979720;
int zero = 0;
unsigned long long int var_13 = 1155051136393549429ULL;
unsigned long long int var_14 = 15979677409542760904ULL;
int var_15 = -539841406;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
