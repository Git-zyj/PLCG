#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2472039613U;
signed char var_1 = (signed char)81;
short var_2 = (short)-7271;
unsigned long long int var_4 = 13066297286825003173ULL;
unsigned char var_5 = (unsigned char)89;
signed char var_6 = (signed char)-85;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)27754;
unsigned char var_9 = (unsigned char)182;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 1849244665;
long long int var_12 = 8179968899959435207LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
