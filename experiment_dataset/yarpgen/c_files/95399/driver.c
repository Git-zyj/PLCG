#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1385095156523624465LL;
short var_2 = (short)17557;
short var_3 = (short)25288;
unsigned long long int var_6 = 10245880421862528000ULL;
signed char var_8 = (signed char)-6;
int zero = 0;
long long int var_18 = -3484138000488706292LL;
unsigned long long int var_19 = 14669458975522895444ULL;
short var_20 = (short)5040;
short var_21 = (short)-20842;
short var_22 = (short)6375;
signed char var_23 = (signed char)115;
long long int var_24 = 3501351379511636091LL;
long long int arr_12 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 616078190409987310LL : -1196574940268790188LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
