#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -620128029032227377LL;
int var_3 = -671220192;
int var_4 = 1060861352;
_Bool var_6 = (_Bool)1;
long long int var_7 = -5005505987295525864LL;
unsigned short var_8 = (unsigned short)45149;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)55;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
