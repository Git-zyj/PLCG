#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)26;
short var_2 = (short)-9986;
unsigned long long int var_5 = 5741965924645031242ULL;
signed char var_6 = (signed char)-30;
unsigned long long int var_7 = 9711641665000469125ULL;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 3331930020U;
int zero = 0;
unsigned short var_14 = (unsigned short)43099;
long long int var_15 = 7546845211998381454LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
