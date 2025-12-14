#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-12;
unsigned long long int var_4 = 13832180190261323574ULL;
int var_5 = 1246685807;
int var_6 = -13712407;
unsigned long long int var_7 = 7509241367205182337ULL;
unsigned char var_8 = (unsigned char)13;
signed char var_9 = (signed char)69;
int zero = 0;
unsigned char var_10 = (unsigned char)189;
unsigned short var_11 = (unsigned short)40322;
unsigned long long int var_12 = 14522609825189597655ULL;
unsigned long long int var_13 = 1618194272514339476ULL;
int var_14 = -87232568;
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
