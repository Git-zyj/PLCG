#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48853;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)50320;
long long int var_4 = -1531603709104258882LL;
int var_5 = 822463813;
int var_6 = 589065340;
signed char var_7 = (signed char)86;
unsigned long long int var_8 = 8557470739836556948ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 7303696572248992890ULL;
unsigned char var_11 = (unsigned char)44;
int zero = 0;
unsigned short var_12 = (unsigned short)19705;
short var_13 = (short)-7071;
unsigned char var_14 = (unsigned char)165;
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
