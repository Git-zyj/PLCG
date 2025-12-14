#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)170;
unsigned long long int var_3 = 4908642593078592924ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 9731909196246771294ULL;
int zero = 0;
long long int var_14 = -3996435297739928820LL;
short var_15 = (short)-12286;
long long int var_16 = -3808785960625501123LL;
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
