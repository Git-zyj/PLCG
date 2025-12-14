#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46167;
unsigned short var_1 = (unsigned short)31636;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)38957;
unsigned short var_8 = (unsigned short)7611;
unsigned short var_9 = (unsigned short)55471;
int zero = 0;
unsigned short var_10 = (unsigned short)37358;
unsigned long long int var_11 = 716274687241018983ULL;
unsigned short var_12 = (unsigned short)54331;
unsigned long long int var_13 = 10114168159699974155ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
