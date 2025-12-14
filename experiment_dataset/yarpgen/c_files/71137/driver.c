#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 796581822U;
unsigned long long int var_2 = 12543863920784473675ULL;
unsigned int var_4 = 329932981U;
short var_6 = (short)-27151;
unsigned char var_8 = (unsigned char)77;
signed char var_10 = (signed char)-70;
unsigned short var_14 = (unsigned short)64742;
short var_17 = (short)-25684;
short var_18 = (short)15307;
int zero = 0;
unsigned char var_20 = (unsigned char)84;
int var_21 = -947722347;
short var_22 = (short)6210;
signed char var_23 = (signed char)-71;
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
