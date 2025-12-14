#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-110;
unsigned char var_1 = (unsigned char)94;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)163;
short var_9 = (short)-31196;
int var_10 = 712709052;
unsigned short var_12 = (unsigned short)40361;
int zero = 0;
long long int var_13 = -5467767225092649124LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)130;
unsigned char var_16 = (unsigned char)200;
signed char var_17 = (signed char)-127;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
