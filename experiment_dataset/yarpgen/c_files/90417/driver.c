#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-79;
short var_3 = (short)8091;
int var_5 = -651037332;
_Bool var_8 = (_Bool)1;
long long int var_9 = 7585997867642220126LL;
long long int var_10 = 8350315007012009076LL;
signed char var_13 = (signed char)5;
int zero = 0;
long long int var_16 = -5320576781276494576LL;
signed char var_17 = (signed char)-46;
signed char var_18 = (signed char)-88;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
