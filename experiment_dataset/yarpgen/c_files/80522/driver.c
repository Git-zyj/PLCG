#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1237544270496918398LL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 8959046195881114248ULL;
unsigned int var_8 = 4168139350U;
int zero = 0;
unsigned short var_17 = (unsigned short)24154;
unsigned char var_18 = (unsigned char)182;
int var_19 = 441904265;
long long int var_20 = 8069401746283237889LL;
long long int var_21 = -2527342384847365144LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
