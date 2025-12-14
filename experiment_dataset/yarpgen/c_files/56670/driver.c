#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1833558562570905227LL;
int var_2 = -1582284297;
signed char var_3 = (signed char)121;
short var_4 = (short)17413;
signed char var_5 = (signed char)-39;
unsigned char var_7 = (unsigned char)150;
int var_10 = 1048192661;
signed char var_12 = (signed char)-41;
unsigned short var_13 = (unsigned short)53682;
int zero = 0;
signed char var_14 = (signed char)-67;
signed char var_15 = (signed char)67;
unsigned short var_16 = (unsigned short)30533;
unsigned short var_17 = (unsigned short)51158;
void init() {
}

void checksum() {
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
