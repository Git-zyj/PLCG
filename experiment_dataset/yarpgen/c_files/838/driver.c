#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -86575922;
short var_3 = (short)-27121;
int var_4 = 289809865;
unsigned long long int var_8 = 10929703926574521219ULL;
int zero = 0;
long long int var_18 = 6845677793316089940LL;
signed char var_19 = (signed char)-71;
unsigned char var_20 = (unsigned char)199;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
