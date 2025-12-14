#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8156817858847693085LL;
unsigned long long int var_4 = 250241683209448088ULL;
unsigned long long int var_7 = 10905105931534824550ULL;
short var_8 = (short)-21294;
signed char var_11 = (signed char)-4;
unsigned short var_16 = (unsigned short)27933;
int zero = 0;
long long int var_20 = -7349411260236016865LL;
signed char var_21 = (signed char)-78;
long long int var_22 = 2146879707114276382LL;
unsigned int var_23 = 1079747731U;
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
