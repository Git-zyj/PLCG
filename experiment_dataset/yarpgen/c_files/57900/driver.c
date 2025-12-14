#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1219038933U;
unsigned char var_3 = (unsigned char)156;
long long int var_8 = 2640647678899477048LL;
signed char var_10 = (signed char)82;
_Bool var_15 = (_Bool)0;
unsigned int var_19 = 1248693510U;
int zero = 0;
long long int var_20 = -2470654382875846543LL;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)7814;
unsigned char var_23 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
