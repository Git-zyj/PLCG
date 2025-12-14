#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12536;
int var_2 = -446921613;
unsigned short var_3 = (unsigned short)42810;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 11028064624793751848ULL;
long long int var_7 = 3817687168722513638LL;
long long int var_9 = -3457592341720246274LL;
unsigned char var_11 = (unsigned char)159;
int var_13 = -453133232;
long long int var_14 = 2654968756000114202LL;
int zero = 0;
unsigned long long int var_15 = 7466279035918557308ULL;
_Bool var_16 = (_Bool)1;
int var_17 = -202361402;
long long int var_18 = -2353869238758085707LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
