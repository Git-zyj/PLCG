#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 17877801818901200119ULL;
short var_13 = (short)-20478;
unsigned short var_14 = (unsigned short)51793;
int var_16 = -718126297;
signed char var_17 = (signed char)120;
int zero = 0;
int var_18 = 501189772;
signed char var_19 = (signed char)90;
short var_20 = (short)12471;
signed char var_21 = (signed char)-44;
unsigned long long int var_22 = 2690324859816852621ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
