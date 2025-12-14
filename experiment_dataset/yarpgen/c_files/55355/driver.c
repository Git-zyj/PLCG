#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -374201470;
unsigned int var_2 = 3795072035U;
long long int var_8 = 2320634930950468019LL;
unsigned int var_10 = 3908172017U;
unsigned short var_12 = (unsigned short)55936;
long long int var_15 = 7527512843222293831LL;
signed char var_16 = (signed char)-57;
unsigned long long int var_17 = 9849262216776694648ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = 1467166508;
unsigned int var_21 = 3163829404U;
int var_22 = -1213439436;
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
