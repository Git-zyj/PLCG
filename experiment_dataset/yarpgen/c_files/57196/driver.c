#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1207893500U;
unsigned int var_3 = 962191634U;
unsigned int var_4 = 2529521052U;
long long int var_8 = 1640698130721969726LL;
long long int var_11 = -6880601782427525803LL;
unsigned long long int var_14 = 9484736681560138842ULL;
long long int var_16 = -9215551478130964533LL;
int zero = 0;
unsigned long long int var_19 = 17578209449103716208ULL;
unsigned long long int var_20 = 5831296164001050129ULL;
int var_21 = -2116005712;
long long int var_22 = 6301388751424389860LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
