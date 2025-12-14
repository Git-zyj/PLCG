#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3550262517U;
unsigned char var_1 = (unsigned char)26;
unsigned int var_2 = 3640096253U;
long long int var_3 = -6599072739662374005LL;
signed char var_4 = (signed char)112;
_Bool var_6 = (_Bool)1;
long long int var_8 = -3191438503848885513LL;
unsigned short var_9 = (unsigned short)19451;
int zero = 0;
signed char var_12 = (signed char)-65;
long long int var_13 = -4953066298431915196LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
