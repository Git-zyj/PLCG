#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8123210574036309738ULL;
int var_3 = -1093618915;
short var_4 = (short)5569;
signed char var_5 = (signed char)10;
int var_7 = 1240901884;
unsigned long long int var_8 = 5559159158783594687ULL;
unsigned long long int var_11 = 17215619594058937938ULL;
long long int var_13 = -1924555037758525438LL;
int zero = 0;
unsigned long long int var_15 = 3329087032082419475ULL;
signed char var_16 = (signed char)43;
int var_17 = 174995229;
unsigned char var_18 = (unsigned char)194;
unsigned long long int var_19 = 10990988887811209914ULL;
unsigned long long int var_20 = 420111253028473887ULL;
unsigned long long int arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 7785462944553664823ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
