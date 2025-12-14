#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-11399;
int var_10 = 1730619977;
unsigned long long int var_13 = 10767707895019387615ULL;
int zero = 0;
unsigned long long int var_19 = 14686995624347110379ULL;
short var_20 = (short)-31261;
long long int var_21 = -4807280173146462824LL;
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
