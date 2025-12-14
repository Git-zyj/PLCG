#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-37;
unsigned short var_1 = (unsigned short)58218;
unsigned short var_2 = (unsigned short)55945;
_Bool var_3 = (_Bool)1;
long long int var_4 = 3502165974543478591LL;
unsigned char var_6 = (unsigned char)45;
int var_7 = -1300862927;
unsigned short var_8 = (unsigned short)39376;
signed char var_9 = (signed char)-2;
unsigned short var_10 = (unsigned short)40869;
int zero = 0;
unsigned char var_11 = (unsigned char)88;
long long int var_12 = 7065637245276689492LL;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 67510113U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
