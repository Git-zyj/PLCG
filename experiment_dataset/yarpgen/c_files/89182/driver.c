#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-36;
unsigned int var_3 = 3072475663U;
long long int var_6 = -3398957239671739842LL;
long long int var_7 = 4633578573706127506LL;
short var_8 = (short)23147;
unsigned short var_9 = (unsigned short)60951;
unsigned int var_14 = 2087980002U;
int var_15 = 1202662778;
int zero = 0;
unsigned int var_16 = 2876737186U;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)17176;
unsigned int var_19 = 819092029U;
void init() {
}

void checksum() {
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
