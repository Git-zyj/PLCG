#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 233817085U;
unsigned int var_3 = 1929591275U;
unsigned long long int var_4 = 9032285373996368688ULL;
unsigned char var_5 = (unsigned char)148;
unsigned long long int var_8 = 17450901907193365589ULL;
unsigned int var_10 = 4063041212U;
unsigned char var_13 = (unsigned char)125;
unsigned long long int var_15 = 9889363465625600023ULL;
unsigned long long int var_16 = 14774724905139686412ULL;
unsigned char var_17 = (unsigned char)200;
unsigned long long int var_18 = 18385908301106521228ULL;
unsigned int var_19 = 1803558687U;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 4143328227U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
