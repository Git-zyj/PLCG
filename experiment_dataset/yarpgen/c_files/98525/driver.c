#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)210;
unsigned char var_3 = (unsigned char)207;
unsigned long long int var_11 = 14873691239240517697ULL;
unsigned long long int var_12 = 1642714619146266444ULL;
unsigned char var_14 = (unsigned char)34;
long long int var_15 = 6123693120349896987LL;
long long int var_16 = -6076249808678080323LL;
int zero = 0;
unsigned char var_17 = (unsigned char)89;
long long int var_18 = -3868037974267788922LL;
unsigned char var_19 = (unsigned char)142;
signed char var_20 = (signed char)-57;
unsigned long long int var_21 = 14338713710053579244ULL;
unsigned char var_22 = (unsigned char)13;
signed char arr_1 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-110;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
