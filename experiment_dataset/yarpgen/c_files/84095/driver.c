#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8671;
long long int var_5 = 8829254329192448511LL;
long long int var_6 = -1724430759964718158LL;
unsigned long long int var_9 = 11393406590855927160ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_14 = 2866925415U;
long long int var_15 = 824304501173427965LL;
short var_19 = (short)-27406;
int zero = 0;
unsigned short var_20 = (unsigned short)28300;
unsigned char var_21 = (unsigned char)38;
unsigned short var_22 = (unsigned short)27963;
int var_23 = -587376126;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
