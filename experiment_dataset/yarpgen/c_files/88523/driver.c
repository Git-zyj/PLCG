#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1301532896705626102ULL;
_Bool var_10 = (_Bool)0;
long long int var_13 = 8940074728475306042LL;
unsigned long long int var_16 = 14946702741659237999ULL;
int var_17 = 2115132086;
int zero = 0;
signed char var_18 = (signed char)-61;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)63585;
unsigned int var_21 = 154495406U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
