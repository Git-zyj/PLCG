#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)45;
unsigned int var_7 = 3729743152U;
unsigned char var_8 = (unsigned char)4;
short var_10 = (short)27319;
int var_12 = 1207626963;
unsigned int var_13 = 3213230959U;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = -1309272213;
signed char var_18 = (signed char)-10;
unsigned char var_19 = (unsigned char)68;
unsigned long long int var_20 = 13312232822805383002ULL;
signed char var_21 = (signed char)117;
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
