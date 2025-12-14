#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7294279249161679180LL;
signed char var_3 = (signed char)-27;
signed char var_4 = (signed char)-4;
unsigned short var_8 = (unsigned short)14057;
long long int var_10 = 2301313709578425651LL;
unsigned int var_11 = 2019587364U;
int zero = 0;
unsigned long long int var_16 = 2006682757314323142ULL;
long long int var_17 = 993763788364058158LL;
signed char var_18 = (signed char)109;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
