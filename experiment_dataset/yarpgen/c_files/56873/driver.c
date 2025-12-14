#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 749985052;
int var_1 = -845985879;
short var_2 = (short)-12988;
unsigned long long int var_3 = 12450382027790095450ULL;
signed char var_4 = (signed char)49;
unsigned int var_5 = 3680039711U;
_Bool var_6 = (_Bool)1;
int var_8 = 1927748245;
unsigned char var_9 = (unsigned char)165;
int var_10 = 2060531570;
unsigned int var_11 = 2907394946U;
int zero = 0;
signed char var_12 = (signed char)126;
unsigned long long int var_13 = 17031403113553239107ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)120;
signed char var_16 = (signed char)-77;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
