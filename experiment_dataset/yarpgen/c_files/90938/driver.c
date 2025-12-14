#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)39;
int var_2 = -228956075;
long long int var_5 = -7867836667269605420LL;
signed char var_6 = (signed char)31;
unsigned int var_8 = 1594788014U;
long long int var_9 = -6045858617907872212LL;
int zero = 0;
unsigned long long int var_11 = 12294233552275980117ULL;
unsigned char var_12 = (unsigned char)15;
void init() {
}

void checksum() {
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
