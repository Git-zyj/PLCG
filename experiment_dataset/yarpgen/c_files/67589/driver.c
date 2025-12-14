#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35553;
long long int var_2 = 4516361052855639144LL;
unsigned char var_3 = (unsigned char)143;
signed char var_5 = (signed char)63;
unsigned char var_7 = (unsigned char)187;
short var_8 = (short)11089;
short var_11 = (short)-28787;
unsigned char var_12 = (unsigned char)59;
int var_13 = -1830662435;
int zero = 0;
unsigned short var_14 = (unsigned short)50264;
unsigned char var_15 = (unsigned char)70;
long long int var_16 = 6056109760097085149LL;
long long int var_17 = -9130356729478811755LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
