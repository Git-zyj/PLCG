#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13568;
unsigned char var_3 = (unsigned char)238;
short var_4 = (short)-2370;
unsigned long long int var_5 = 15837347583712529398ULL;
unsigned long long int var_6 = 14015039100643380146ULL;
int var_7 = -1143427251;
int var_8 = 1546199642;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)34593;
unsigned short var_12 = (unsigned short)56542;
int zero = 0;
unsigned char var_13 = (unsigned char)186;
unsigned long long int var_14 = 5324820969703840336ULL;
unsigned short var_15 = (unsigned short)13780;
unsigned short var_16 = (unsigned short)9587;
signed char var_17 = (signed char)125;
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
