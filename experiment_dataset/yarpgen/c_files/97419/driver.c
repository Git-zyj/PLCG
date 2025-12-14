#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)111;
unsigned long long int var_8 = 11411544456587707903ULL;
unsigned int var_10 = 2093717133U;
long long int var_15 = 2033819767135281143LL;
signed char var_17 = (signed char)61;
int zero = 0;
unsigned int var_19 = 1517906766U;
long long int var_20 = 2625723733526491091LL;
unsigned int var_21 = 1409771358U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
