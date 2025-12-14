#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 585339684;
int var_1 = -65243455;
unsigned char var_2 = (unsigned char)150;
unsigned char var_3 = (unsigned char)3;
unsigned char var_4 = (unsigned char)192;
unsigned char var_5 = (unsigned char)68;
signed char var_7 = (signed char)-99;
unsigned char var_9 = (unsigned char)36;
int zero = 0;
unsigned char var_11 = (unsigned char)88;
int var_12 = -1501274344;
void init() {
}

void checksum() {
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
