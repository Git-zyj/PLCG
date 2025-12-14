#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)4;
signed char var_3 = (signed char)40;
unsigned char var_4 = (unsigned char)180;
long long int var_5 = 6461169852770976840LL;
unsigned char var_7 = (unsigned char)110;
unsigned char var_8 = (unsigned char)149;
unsigned short var_9 = (unsigned short)40631;
int zero = 0;
short var_10 = (short)31469;
unsigned short var_11 = (unsigned short)17665;
unsigned short var_12 = (unsigned short)46674;
signed char var_13 = (signed char)-22;
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
