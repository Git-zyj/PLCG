#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14980305625407914332ULL;
unsigned long long int var_1 = 8209951906736528007ULL;
unsigned long long int var_2 = 284260297488132745ULL;
_Bool var_3 = (_Bool)0;
short var_4 = (short)25660;
unsigned long long int var_5 = 14247896189480342387ULL;
unsigned long long int var_6 = 346118950790505735ULL;
short var_7 = (short)7021;
short var_8 = (short)4886;
int zero = 0;
unsigned long long int var_11 = 4747181769024576611ULL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
