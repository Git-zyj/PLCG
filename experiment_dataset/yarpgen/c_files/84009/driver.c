#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2319438044161911033LL;
short var_3 = (short)-20191;
unsigned short var_8 = (unsigned short)17682;
long long int var_12 = 8279811007441945864LL;
int var_15 = 419543611;
int zero = 0;
unsigned int var_16 = 1288789461U;
unsigned char var_17 = (unsigned char)34;
short var_18 = (short)16958;
long long int var_19 = -6980244365500507616LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
