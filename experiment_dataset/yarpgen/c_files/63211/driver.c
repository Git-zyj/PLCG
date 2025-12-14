#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-1;
long long int var_2 = -7706202281291449942LL;
unsigned int var_3 = 2688446121U;
short var_5 = (short)10728;
unsigned long long int var_12 = 3114041753605329563ULL;
long long int var_13 = 7707097434355461740LL;
unsigned int var_14 = 2817084925U;
int zero = 0;
unsigned short var_17 = (unsigned short)37602;
int var_18 = -503813984;
signed char var_19 = (signed char)68;
unsigned short var_20 = (unsigned short)2202;
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
