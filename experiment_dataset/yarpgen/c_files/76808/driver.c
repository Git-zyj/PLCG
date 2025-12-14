#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)226;
unsigned long long int var_3 = 14600161240031626484ULL;
unsigned short var_4 = (unsigned short)52556;
unsigned long long int var_5 = 6640368079207124460ULL;
short var_9 = (short)-283;
int zero = 0;
unsigned int var_10 = 4006894024U;
int var_11 = 578591254;
int var_12 = -1753575043;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
