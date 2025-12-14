#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 341127564;
unsigned int var_2 = 2599818863U;
unsigned long long int var_3 = 15188237984364591819ULL;
unsigned long long int var_4 = 3930329187560675436ULL;
unsigned short var_6 = (unsigned short)26319;
unsigned int var_7 = 2448528278U;
unsigned char var_8 = (unsigned char)66;
unsigned long long int var_9 = 18371151236497064378ULL;
unsigned long long int var_10 = 14962790064405180437ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)14229;
unsigned char var_14 = (unsigned char)249;
void init() {
}

void checksum() {
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
