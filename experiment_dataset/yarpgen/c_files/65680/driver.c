#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60953;
unsigned char var_2 = (unsigned char)40;
unsigned char var_3 = (unsigned char)89;
unsigned long long int var_4 = 12698799798993338054ULL;
long long int var_5 = 3830958754449471405LL;
unsigned long long int var_7 = 11544776753879673277ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 932236705U;
int zero = 0;
long long int var_10 = 4691297147271392839LL;
signed char var_11 = (signed char)-24;
int var_12 = -1752742069;
_Bool var_13 = (_Bool)0;
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
