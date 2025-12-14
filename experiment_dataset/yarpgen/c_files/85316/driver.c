#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2116239758;
unsigned int var_3 = 1917554842U;
long long int var_4 = -5297770409744232693LL;
long long int var_5 = 1383761018053510883LL;
unsigned short var_6 = (unsigned short)4497;
unsigned long long int var_8 = 8012731625693617826ULL;
signed char var_10 = (signed char)66;
unsigned int var_11 = 3259581116U;
long long int var_16 = -2363314452788823795LL;
int zero = 0;
signed char var_17 = (signed char)-39;
_Bool var_18 = (_Bool)0;
long long int var_19 = 8578252265831169234LL;
long long int var_20 = -4863369322404826743LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
