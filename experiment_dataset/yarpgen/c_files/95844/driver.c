#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56754;
unsigned char var_3 = (unsigned char)49;
_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)110;
unsigned int var_9 = 2315631367U;
short var_10 = (short)-12715;
long long int var_12 = 3628568034242962869LL;
unsigned int var_13 = 2393276631U;
unsigned long long int var_14 = 14146675392434296836ULL;
int var_18 = 1373471895;
int zero = 0;
unsigned short var_20 = (unsigned short)2505;
unsigned long long int var_21 = 7106018577077943926ULL;
int var_22 = -2007603041;
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
