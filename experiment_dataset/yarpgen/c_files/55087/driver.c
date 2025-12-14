#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16210;
unsigned char var_3 = (unsigned char)40;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 1437548146779530797ULL;
_Bool var_8 = (_Bool)1;
signed char var_14 = (signed char)-12;
int zero = 0;
int var_15 = 1319279438;
long long int var_16 = -8236605604688108832LL;
_Bool var_17 = (_Bool)0;
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
