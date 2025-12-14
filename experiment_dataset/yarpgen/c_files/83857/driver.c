#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8237954932827873935LL;
unsigned short var_4 = (unsigned short)1090;
long long int var_6 = -6150115684222517970LL;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)145;
unsigned char var_9 = (unsigned char)93;
int zero = 0;
unsigned char var_14 = (unsigned char)41;
long long int var_15 = 3785119343295535094LL;
unsigned long long int var_16 = 14498342036494085311ULL;
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
