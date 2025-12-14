#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 58887147;
unsigned short var_4 = (unsigned short)10662;
int var_5 = -1860369971;
short var_7 = (short)9622;
_Bool var_9 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int var_14 = 746456220;
short var_17 = (short)-15229;
int zero = 0;
short var_20 = (short)-27828;
int var_21 = 634318370;
unsigned short var_22 = (unsigned short)28983;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
