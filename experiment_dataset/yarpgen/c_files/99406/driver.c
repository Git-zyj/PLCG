#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)14;
long long int var_5 = -4731464625903414411LL;
signed char var_6 = (signed char)-54;
int var_7 = 621720455;
unsigned long long int var_9 = 7461060793468060126ULL;
int zero = 0;
signed char var_10 = (signed char)91;
signed char var_11 = (signed char)94;
long long int var_12 = -7373355273782908885LL;
short var_13 = (short)24858;
short var_14 = (short)22867;
long long int var_15 = -7945135674043043261LL;
unsigned short arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)46092;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
