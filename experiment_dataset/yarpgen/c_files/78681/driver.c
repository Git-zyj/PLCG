#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7884180904842204665LL;
_Bool var_5 = (_Bool)1;
short var_8 = (short)-19963;
unsigned char var_13 = (unsigned char)222;
unsigned int var_14 = 3544531137U;
unsigned int var_18 = 3855806609U;
int zero = 0;
int var_19 = -1883805420;
long long int var_20 = -6966884444829139431LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
