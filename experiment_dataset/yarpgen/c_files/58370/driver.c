#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)42;
short var_2 = (short)-13015;
int var_5 = 344237191;
unsigned int var_6 = 4071460947U;
short var_7 = (short)-29118;
signed char var_8 = (signed char)-54;
short var_9 = (short)-27130;
short var_10 = (short)-15446;
unsigned long long int var_12 = 1596988230169389340ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-11170;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 16848501677915753068ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
