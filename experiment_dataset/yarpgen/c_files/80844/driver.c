#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3178556682U;
unsigned long long int var_4 = 7185324587618661361ULL;
int var_5 = 2023651672;
short var_6 = (short)-16189;
unsigned long long int var_16 = 17008286186407406360ULL;
_Bool var_17 = (_Bool)0;
long long int var_19 = 6121309345981750493LL;
int zero = 0;
unsigned short var_20 = (unsigned short)61259;
unsigned short var_21 = (unsigned short)62018;
unsigned long long int var_22 = 12487537370202515165ULL;
unsigned long long int var_23 = 5198659099265008951ULL;
signed char var_24 = (signed char)26;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
