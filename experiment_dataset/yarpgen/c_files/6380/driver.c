#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6897390622426774416LL;
int var_9 = 1578295703;
unsigned short var_10 = (unsigned short)29081;
unsigned int var_11 = 631054143U;
int var_13 = 1300858101;
int zero = 0;
int var_15 = -1688652912;
unsigned int var_16 = 2386779385U;
unsigned short var_17 = (unsigned short)4326;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)17669;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
