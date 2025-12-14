#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2107605675882552126LL;
unsigned int var_3 = 1700133561U;
signed char var_8 = (signed char)-14;
unsigned char var_10 = (unsigned char)109;
short var_11 = (short)7699;
signed char var_14 = (signed char)-39;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 4431299898528990670ULL;
unsigned short var_17 = (unsigned short)31235;
unsigned long long int var_18 = 12465975699281468702ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
