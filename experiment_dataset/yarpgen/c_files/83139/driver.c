#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18114;
unsigned long long int var_2 = 1415508508063836543ULL;
unsigned long long int var_3 = 17615165116710022026ULL;
unsigned char var_4 = (unsigned char)89;
short var_6 = (short)-22138;
int var_8 = -58565856;
unsigned char var_9 = (unsigned char)225;
unsigned long long int var_10 = 9452521966335373690ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 585116123U;
long long int var_14 = 5695738709191808953LL;
short var_15 = (short)-610;
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
