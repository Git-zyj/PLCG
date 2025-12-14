#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
long long int var_3 = 5448062595384144909LL;
unsigned char var_4 = (unsigned char)104;
long long int var_7 = -3930148433185710793LL;
unsigned short var_14 = (unsigned short)39444;
int zero = 0;
short var_19 = (short)-30020;
unsigned short var_20 = (unsigned short)34262;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 1974324986U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
