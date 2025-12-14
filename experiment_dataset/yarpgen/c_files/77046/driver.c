#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27503;
unsigned long long int var_1 = 10707435726823479368ULL;
int var_2 = -737984800;
signed char var_3 = (signed char)-46;
short var_5 = (short)2742;
unsigned int var_7 = 590689659U;
short var_9 = (short)-8735;
unsigned long long int var_10 = 1027963317336227388ULL;
unsigned short var_12 = (unsigned short)45065;
int zero = 0;
int var_15 = -1973704441;
signed char var_16 = (signed char)62;
signed char var_17 = (signed char)-38;
_Bool var_18 = (_Bool)1;
int var_19 = -551970024;
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
