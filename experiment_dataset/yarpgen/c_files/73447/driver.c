#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 2274623119U;
unsigned int var_2 = 1466211682U;
unsigned long long int var_5 = 11799452614422263018ULL;
long long int var_6 = 7611740421767720472LL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-5;
unsigned char var_9 = (unsigned char)140;
int var_10 = 509756530;
long long int var_11 = 454482600373443928LL;
int zero = 0;
unsigned short var_12 = (unsigned short)57053;
short var_13 = (short)19;
short var_14 = (short)22753;
unsigned long long int var_15 = 14112199522576830422ULL;
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
