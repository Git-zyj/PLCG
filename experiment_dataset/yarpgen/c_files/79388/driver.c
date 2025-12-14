#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14386893047194209790ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 13373454205675916789ULL;
signed char var_4 = (signed char)-116;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)6037;
long long int var_8 = -1167508561688335283LL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)47536;
signed char var_11 = (signed char)18;
unsigned char var_12 = (unsigned char)235;
int zero = 0;
unsigned long long int var_16 = 9898122439851075665ULL;
signed char var_17 = (signed char)26;
void init() {
}

void checksum() {
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
