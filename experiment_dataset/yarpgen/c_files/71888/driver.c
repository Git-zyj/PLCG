#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7785099192862855167ULL;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)31;
unsigned long long int var_5 = 15046626810776636149ULL;
long long int var_6 = 4816219024847892251LL;
short var_7 = (short)6869;
signed char var_13 = (signed char)50;
unsigned int var_14 = 862572714U;
int zero = 0;
short var_18 = (short)-103;
unsigned int var_19 = 3227143819U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
