#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)44940;
unsigned short var_6 = (unsigned short)64893;
signed char var_8 = (signed char)20;
signed char var_12 = (signed char)-50;
unsigned short var_13 = (unsigned short)64076;
int zero = 0;
int var_14 = -234439868;
int var_15 = 821149998;
_Bool var_16 = (_Bool)0;
int var_17 = 264341094;
long long int var_18 = -1528796944962117108LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
