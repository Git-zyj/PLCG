#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 146256966269073862ULL;
signed char var_2 = (signed char)99;
unsigned short var_4 = (unsigned short)23617;
unsigned int var_6 = 4286741924U;
short var_9 = (short)-1300;
signed char var_10 = (signed char)-127;
unsigned long long int var_11 = 12483496934744673304ULL;
int zero = 0;
unsigned long long int var_14 = 8695551029616203366ULL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-9328;
short var_17 = (short)26048;
signed char var_18 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
