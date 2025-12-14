#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8604034792797595846ULL;
long long int var_2 = -1110927113635685567LL;
long long int var_4 = -8184336072505883096LL;
unsigned long long int var_5 = 2764316907927666478ULL;
unsigned long long int var_6 = 7724220546709610701ULL;
unsigned long long int var_11 = 8146933725249972311ULL;
unsigned long long int var_16 = 3575556152101111906ULL;
unsigned long long int var_18 = 14712041869246968173ULL;
int zero = 0;
long long int var_19 = -6291797410190139934LL;
long long int var_20 = -1919858099153296229LL;
long long int var_21 = -351955071407605097LL;
long long int var_22 = 2787574430838072840LL;
unsigned long long int var_23 = 11619147271813504097ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
