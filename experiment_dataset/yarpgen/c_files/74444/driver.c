#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10191944181946822924ULL;
unsigned long long int var_10 = 6562203038201437163ULL;
long long int var_13 = -1722835367906931795LL;
signed char var_15 = (signed char)-13;
unsigned short var_18 = (unsigned short)40365;
signed char var_19 = (signed char)-103;
int zero = 0;
long long int var_20 = 6450112544191655777LL;
unsigned long long int var_21 = 9913585549780459973ULL;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-69;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
