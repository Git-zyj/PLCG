#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6716017957861296748LL;
long long int var_4 = -378490347532113223LL;
long long int var_7 = -1168217351150248701LL;
_Bool var_11 = (_Bool)0;
long long int var_12 = 5369185188365027464LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2323467339U;
signed char var_15 = (signed char)-89;
long long int var_16 = -8926917019414597053LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
