#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16707594715203039849ULL;
int var_2 = -1545538905;
int var_4 = 678278724;
signed char var_8 = (signed char)-62;
short var_9 = (short)-23932;
short var_10 = (short)23414;
signed char var_11 = (signed char)-17;
unsigned char var_12 = (unsigned char)123;
unsigned char var_13 = (unsigned char)254;
int zero = 0;
signed char var_15 = (signed char)-7;
signed char var_16 = (signed char)-22;
signed char var_17 = (signed char)112;
long long int var_18 = 2581580084728605580LL;
unsigned char var_19 = (unsigned char)180;
signed char arr_6 [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (signed char)80;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
