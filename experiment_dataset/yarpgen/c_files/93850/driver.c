#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-47;
unsigned char var_3 = (unsigned char)220;
unsigned int var_4 = 1838173392U;
unsigned short var_7 = (unsigned short)34119;
int var_8 = 111465020;
unsigned char var_9 = (unsigned char)119;
_Bool var_10 = (_Bool)1;
long long int var_13 = -812550559241086675LL;
int zero = 0;
long long int var_14 = 5972186127576477779LL;
unsigned char var_15 = (unsigned char)80;
long long int var_16 = 8995530110895775603LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
