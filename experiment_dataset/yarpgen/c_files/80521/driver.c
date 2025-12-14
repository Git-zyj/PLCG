#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9289870848668183985ULL;
long long int var_6 = 8757502650459521724LL;
unsigned short var_9 = (unsigned short)59964;
int zero = 0;
unsigned int var_17 = 984555192U;
unsigned long long int var_18 = 1342785786095918158ULL;
long long int var_19 = 3792747001102883244LL;
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
