#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11733;
_Bool var_3 = (_Bool)0;
long long int var_5 = 9219999873800698152LL;
long long int var_7 = 7914827703423518248LL;
int var_8 = -70420224;
unsigned short var_9 = (unsigned short)53033;
int zero = 0;
long long int var_10 = -1768093116806283738LL;
short var_11 = (short)-8466;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
