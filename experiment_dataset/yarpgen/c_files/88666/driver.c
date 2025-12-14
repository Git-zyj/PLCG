#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 300075781;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)165;
unsigned short var_4 = (unsigned short)53561;
int var_6 = 1215084213;
short var_9 = (short)8636;
int zero = 0;
int var_12 = -1223424052;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)53153;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
