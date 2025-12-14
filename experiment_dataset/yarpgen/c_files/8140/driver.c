#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2333804815U;
unsigned char var_2 = (unsigned char)44;
unsigned char var_3 = (unsigned char)230;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)114;
unsigned short var_6 = (unsigned short)22685;
long long int var_7 = -3105543215406744511LL;
long long int var_8 = 4737906007694526628LL;
signed char var_10 = (signed char)-46;
unsigned short var_11 = (unsigned short)63056;
unsigned int var_12 = 419127401U;
signed char var_14 = (signed char)-111;
unsigned int var_15 = 2707587602U;
int zero = 0;
unsigned long long int var_16 = 1759713528417177613ULL;
unsigned long long int var_17 = 1356763536435689864ULL;
unsigned short var_18 = (unsigned short)54275;
int var_19 = -1848840837;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
