#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_6 = 6740309664471419746ULL;
unsigned short var_8 = (unsigned short)46125;
long long int var_14 = 616370386537039215LL;
int zero = 0;
long long int var_19 = 6938223287555472219LL;
unsigned int var_20 = 1116188042U;
long long int var_21 = -2171119023752476486LL;
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
