#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13226913324416285404ULL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 11394408709142812814ULL;
unsigned int var_3 = 1704591340U;
signed char var_4 = (signed char)24;
unsigned int var_5 = 3338906236U;
signed char var_7 = (signed char)(-127 - 1);
unsigned long long int var_9 = 16528737154566626669ULL;
int zero = 0;
unsigned long long int var_10 = 3895502314962534175ULL;
_Bool var_11 = (_Bool)0;
long long int var_12 = -3178567223088323241LL;
signed char var_13 = (signed char)28;
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
