#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 9423967792225900038ULL;
int var_4 = 293234817;
int var_9 = 1660998998;
int var_11 = 1957206707;
_Bool var_12 = (_Bool)1;
long long int var_13 = 5124426450721279288LL;
int zero = 0;
unsigned long long int var_14 = 11494192524365927791ULL;
short var_15 = (short)-19238;
signed char var_16 = (signed char)-79;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
