#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -831629813;
signed char var_1 = (signed char)122;
unsigned char var_5 = (unsigned char)102;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)-55;
signed char var_10 = (signed char)101;
_Bool var_13 = (_Bool)0;
long long int var_16 = -5511134070084546485LL;
unsigned int var_19 = 468140226U;
int zero = 0;
signed char var_20 = (signed char)-21;
long long int var_21 = -7494388121273571303LL;
unsigned int var_22 = 3083547012U;
unsigned int var_23 = 3229239873U;
long long int var_24 = -856450400033288286LL;
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
