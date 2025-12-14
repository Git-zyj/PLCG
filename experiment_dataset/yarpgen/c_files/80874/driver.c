#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1367623497;
unsigned short var_1 = (unsigned short)34817;
_Bool var_2 = (_Bool)1;
short var_6 = (short)28583;
unsigned long long int var_10 = 3499222037992202531ULL;
signed char var_11 = (signed char)94;
int var_12 = -1816722363;
unsigned long long int var_13 = 4383129687191954179ULL;
signed char var_15 = (signed char)-85;
int zero = 0;
unsigned char var_17 = (unsigned char)59;
short var_18 = (short)-498;
int var_19 = 211081752;
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
