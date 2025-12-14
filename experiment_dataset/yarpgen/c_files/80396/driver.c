#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-72;
unsigned short var_5 = (unsigned short)56602;
unsigned char var_6 = (unsigned char)50;
unsigned int var_10 = 495998956U;
unsigned long long int var_11 = 9620514933806570169ULL;
short var_12 = (short)32546;
long long int var_13 = -1372839787036859982LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 3834601340481987131ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
