#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-25964;
short var_4 = (short)-23109;
long long int var_5 = 8165180181915486438LL;
int var_6 = 965399013;
signed char var_7 = (signed char)66;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 11453580495629067514ULL;
unsigned char var_11 = (unsigned char)140;
signed char var_12 = (signed char)59;
unsigned long long int var_13 = 514481431784833310ULL;
unsigned int var_14 = 1871253935U;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_16 = -941533714;
unsigned int var_17 = 3287305098U;
int var_18 = 41911387;
long long int var_19 = 1198433703573673020LL;
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
