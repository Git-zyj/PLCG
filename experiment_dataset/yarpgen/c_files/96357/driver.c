#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)6;
short var_3 = (short)17637;
unsigned short var_4 = (unsigned short)11346;
signed char var_5 = (signed char)-53;
signed char var_8 = (signed char)-43;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 17584185451564052094ULL;
unsigned int var_11 = 2929370631U;
unsigned short var_12 = (unsigned short)25966;
signed char var_13 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
