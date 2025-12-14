#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)126;
signed char var_2 = (signed char)-87;
short var_11 = (short)17630;
int var_12 = 738576692;
long long int var_14 = 3896804002848678494LL;
signed char var_17 = (signed char)-32;
int zero = 0;
long long int var_18 = -1659971121717230860LL;
unsigned int var_19 = 1306755386U;
unsigned long long int var_20 = 15809653919619665253ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
