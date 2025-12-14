#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -334167905;
int var_3 = -736965849;
signed char var_5 = (signed char)-24;
int var_7 = 644852927;
short var_8 = (short)-30372;
unsigned char var_9 = (unsigned char)175;
unsigned long long int var_10 = 5201040714458491213ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_15 = 526076465;
int var_16 = 1416267735;
short var_17 = (short)-5012;
unsigned short var_18 = (unsigned short)46309;
unsigned int var_19 = 678741662U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
