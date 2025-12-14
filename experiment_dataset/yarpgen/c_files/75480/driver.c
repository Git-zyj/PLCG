#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)176;
int var_8 = -1259700761;
unsigned int var_10 = 1027114052U;
int zero = 0;
signed char var_17 = (signed char)-57;
int var_18 = 591408983;
long long int var_19 = -5994625279645272040LL;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)37433;
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
