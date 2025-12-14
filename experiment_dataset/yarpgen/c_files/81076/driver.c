#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5043;
unsigned short var_3 = (unsigned short)61281;
_Bool var_7 = (_Bool)1;
unsigned int var_9 = 3447065517U;
signed char var_14 = (signed char)-61;
signed char var_16 = (signed char)60;
long long int var_17 = -4729846714265707177LL;
short var_18 = (short)14213;
short var_19 = (short)-12267;
int zero = 0;
int var_20 = -1951031794;
long long int var_21 = 6474013696621719375LL;
unsigned long long int var_22 = 13247355357906231193ULL;
unsigned char var_23 = (unsigned char)179;
signed char var_24 = (signed char)-98;
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
