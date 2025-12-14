#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6611;
signed char var_1 = (signed char)25;
long long int var_2 = -5250279324097936232LL;
signed char var_3 = (signed char)90;
unsigned char var_4 = (unsigned char)238;
unsigned int var_5 = 949574588U;
unsigned long long int var_6 = 10155141375029849150ULL;
short var_8 = (short)-9952;
unsigned long long int var_9 = 3291796620122259954ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)73;
unsigned long long int var_12 = 6811161063756017724ULL;
unsigned int var_13 = 2503285709U;
unsigned long long int var_14 = 15857525063697537176ULL;
short var_15 = (short)10814;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
