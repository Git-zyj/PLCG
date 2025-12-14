#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)32753;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)12;
long long int var_16 = 4395249403650886020LL;
long long int var_17 = 6724868140569149563LL;
int zero = 0;
unsigned short var_19 = (unsigned short)51649;
unsigned char var_20 = (unsigned char)19;
int var_21 = 977189263;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
