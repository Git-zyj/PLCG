#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4800638406141295664LL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int var_9 = -374641339;
int zero = 0;
int var_10 = -924428869;
long long int var_11 = -7234366731434737859LL;
int var_12 = 1601697011;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
