#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27997;
long long int var_1 = 3659893476796137809LL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 15030545846077943153ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)44387;
int var_11 = 951230556;
unsigned short var_12 = (unsigned short)51985;
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
