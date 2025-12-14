#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
long long int var_2 = 6243414876869821459LL;
long long int var_3 = -8581142348215503631LL;
unsigned char var_4 = (unsigned char)86;
long long int var_5 = -2248515818711213111LL;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 85129418U;
signed char var_9 = (signed char)-90;
int zero = 0;
unsigned char var_11 = (unsigned char)187;
unsigned short var_12 = (unsigned short)4220;
long long int var_13 = 9157403332879585208LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
