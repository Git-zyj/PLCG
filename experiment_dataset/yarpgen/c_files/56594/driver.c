#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)25972;
unsigned short var_10 = (unsigned short)41383;
unsigned long long int var_13 = 196558861371221177ULL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)26220;
unsigned long long int var_17 = 15550455583550747844ULL;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)82;
int var_21 = 1955078591;
unsigned long long int var_22 = 12538658280571412243ULL;
void init() {
}

void checksum() {
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
