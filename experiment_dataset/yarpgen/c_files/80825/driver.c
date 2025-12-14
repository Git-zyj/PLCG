#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3924841795U;
_Bool var_2 = (_Bool)1;
unsigned char var_8 = (unsigned char)190;
short var_10 = (short)-4434;
unsigned short var_15 = (unsigned short)26902;
int zero = 0;
signed char var_17 = (signed char)115;
unsigned char var_18 = (unsigned char)181;
int var_19 = -555806210;
void init() {
}

void checksum() {
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
