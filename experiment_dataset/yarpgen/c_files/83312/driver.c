#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61743;
signed char var_2 = (signed char)-93;
long long int var_3 = -4139557006899495654LL;
int var_4 = -289531618;
int var_5 = -1476001365;
unsigned long long int var_6 = 12062323864847119502ULL;
unsigned short var_7 = (unsigned short)39237;
short var_8 = (short)-31854;
int var_9 = -1646677400;
int zero = 0;
unsigned short var_10 = (unsigned short)61980;
int var_11 = 134022552;
long long int var_12 = 1212897394807851315LL;
unsigned long long int var_13 = 8623927516752356444ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
