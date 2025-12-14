#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8020040132139922288ULL;
unsigned short var_1 = (unsigned short)1769;
unsigned short var_2 = (unsigned short)13904;
unsigned short var_3 = (unsigned short)14162;
signed char var_4 = (signed char)82;
signed char var_5 = (signed char)17;
unsigned long long int var_6 = 11252989821433952628ULL;
int var_7 = -504564258;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)19024;
unsigned short var_11 = (unsigned short)36429;
signed char var_12 = (signed char)-118;
short var_14 = (short)-20534;
unsigned long long int var_15 = 8147583112509119729ULL;
int var_16 = -834495470;
int zero = 0;
unsigned long long int var_17 = 13747067209666489840ULL;
unsigned int var_18 = 1851648217U;
unsigned long long int var_19 = 1815942228977993020ULL;
void init() {
}

void checksum() {
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
