#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)91;
short var_2 = (short)-17591;
signed char var_3 = (signed char)20;
signed char var_5 = (signed char)-5;
short var_11 = (short)-5986;
unsigned char var_13 = (unsigned char)150;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)210;
short var_20 = (short)-4460;
unsigned char var_21 = (unsigned char)226;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
