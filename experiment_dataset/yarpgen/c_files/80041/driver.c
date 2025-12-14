#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)-16525;
int var_2 = 1767525550;
unsigned long long int var_3 = 11438362070884634165ULL;
unsigned long long int var_4 = 1365139700663573244ULL;
signed char var_5 = (signed char)-75;
signed char var_6 = (signed char)55;
signed char var_9 = (signed char)71;
long long int var_10 = -4581948033976506829LL;
long long int var_11 = -4147822488628744489LL;
int zero = 0;
int var_12 = -1153819834;
long long int var_13 = 763231485187937954LL;
unsigned int var_14 = 1247886904U;
signed char var_15 = (signed char)110;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
