#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28015;
unsigned char var_1 = (unsigned char)172;
int var_2 = 1284370147;
unsigned char var_3 = (unsigned char)135;
short var_4 = (short)-27684;
unsigned int var_6 = 2354695062U;
unsigned char var_8 = (unsigned char)91;
unsigned int var_10 = 1915320778U;
int zero = 0;
unsigned int var_11 = 1681177790U;
int var_12 = 136265992;
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
