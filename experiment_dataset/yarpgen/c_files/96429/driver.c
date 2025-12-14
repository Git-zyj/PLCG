#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7144649059941989219LL;
unsigned char var_2 = (unsigned char)211;
unsigned short var_3 = (unsigned short)4063;
signed char var_7 = (signed char)-5;
signed char var_12 = (signed char)119;
int zero = 0;
unsigned char var_13 = (unsigned char)91;
unsigned int var_14 = 351781660U;
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
