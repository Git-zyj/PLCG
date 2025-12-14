#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2055081561;
unsigned long long int var_1 = 555633785957511391ULL;
signed char var_2 = (signed char)8;
unsigned long long int var_4 = 1284429004583169993ULL;
unsigned int var_5 = 3465360401U;
signed char var_6 = (signed char)-75;
short var_8 = (short)-23404;
_Bool var_9 = (_Bool)0;
int var_13 = -1075336725;
int var_14 = 1414757156;
unsigned long long int var_15 = 6246438309903736294ULL;
unsigned short var_16 = (unsigned short)1872;
int zero = 0;
unsigned long long int var_17 = 10623396798472958105ULL;
int var_18 = 1495214080;
short var_19 = (short)-23620;
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
