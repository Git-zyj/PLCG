#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
signed char var_3 = (signed char)-121;
unsigned char var_4 = (unsigned char)68;
int var_9 = 1722081377;
unsigned long long int var_13 = 2641901317428818560ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)50204;
unsigned char var_21 = (unsigned char)91;
unsigned char var_22 = (unsigned char)147;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
