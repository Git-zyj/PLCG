#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)12106;
unsigned int var_4 = 3362621053U;
long long int var_5 = 7669345749825159254LL;
long long int var_6 = 9193045133540086491LL;
unsigned int var_7 = 983959149U;
unsigned char var_9 = (unsigned char)144;
unsigned int var_11 = 4087360287U;
int zero = 0;
unsigned char var_12 = (unsigned char)136;
unsigned char var_13 = (unsigned char)54;
unsigned int var_14 = 2493564213U;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)61880;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
