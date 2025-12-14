#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)13182;
unsigned short var_4 = (unsigned short)3673;
long long int var_5 = -5380341202019781675LL;
signed char var_6 = (signed char)51;
unsigned long long int var_9 = 1041849440044518715ULL;
unsigned long long int var_11 = 8829647287601077811ULL;
long long int var_18 = 5530322625370876251LL;
int zero = 0;
short var_20 = (short)10334;
unsigned short var_21 = (unsigned short)59656;
unsigned long long int var_22 = 17301843095150508732ULL;
unsigned int var_23 = 2043832525U;
unsigned int var_24 = 3188033449U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
