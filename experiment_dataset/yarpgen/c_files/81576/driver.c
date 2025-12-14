#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)91;
unsigned long long int var_2 = 10572132561079214856ULL;
unsigned short var_7 = (unsigned short)62037;
unsigned long long int var_13 = 16316830418357610065ULL;
int zero = 0;
long long int var_17 = 3774747736804629150LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 2423305852522769321LL;
void init() {
}

void checksum() {
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
