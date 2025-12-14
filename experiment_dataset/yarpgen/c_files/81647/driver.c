#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5202459971749737568ULL;
signed char var_1 = (signed char)-77;
unsigned char var_2 = (unsigned char)41;
unsigned long long int var_4 = 11490049990888485146ULL;
unsigned long long int var_5 = 14457899544360926889ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)44;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 11862274448302444727ULL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)26;
unsigned int var_14 = 2327099865U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
