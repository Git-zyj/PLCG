#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-52;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)4872;
unsigned char var_9 = (unsigned char)8;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 17514027527264378932ULL;
unsigned long long int var_12 = 11060852870016820506ULL;
int zero = 0;
signed char var_15 = (signed char)106;
signed char var_16 = (signed char)9;
unsigned char var_17 = (unsigned char)217;
void init() {
}

void checksum() {
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
