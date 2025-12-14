#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)8014;
int var_1 = -1793145734;
unsigned short var_4 = (unsigned short)31486;
unsigned short var_6 = (unsigned short)1543;
signed char var_11 = (signed char)-67;
short var_12 = (short)26863;
short var_13 = (short)-7668;
long long int var_15 = 8029321017294680121LL;
unsigned long long int var_16 = 4089123196781993840ULL;
int zero = 0;
unsigned long long int var_17 = 6944823287711281303ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
