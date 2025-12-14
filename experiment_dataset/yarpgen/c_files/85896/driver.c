#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7856498222385398955LL;
unsigned int var_4 = 1596683146U;
signed char var_5 = (signed char)-93;
short var_8 = (short)-19824;
signed char var_12 = (signed char)-120;
int zero = 0;
long long int var_13 = 6442216570608432533LL;
_Bool var_14 = (_Bool)0;
int var_15 = -1427472485;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
