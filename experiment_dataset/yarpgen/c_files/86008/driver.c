#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)111;
unsigned long long int var_3 = 17962396175358037839ULL;
int var_5 = 1069395633;
unsigned char var_6 = (unsigned char)0;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)31707;
unsigned char var_19 = (unsigned char)53;
void init() {
}

void checksum() {
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
