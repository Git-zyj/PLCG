#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
short var_5 = (short)24710;
unsigned long long int var_6 = 2439594727455236083ULL;
unsigned char var_7 = (unsigned char)199;
short var_8 = (short)25302;
unsigned short var_9 = (unsigned short)19514;
unsigned char var_10 = (unsigned char)91;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned char var_13 = (unsigned char)109;
unsigned long long int var_14 = 12352477138111366426ULL;
signed char var_15 = (signed char)-19;
unsigned long long int var_16 = 8912634070007565103ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
