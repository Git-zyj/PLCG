#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)57;
signed char var_3 = (signed char)-91;
signed char var_4 = (signed char)-53;
long long int var_6 = 8373190052153932580LL;
long long int var_8 = 7461304985549526911LL;
long long int var_9 = 6058012548769800071LL;
int var_10 = 1515801156;
int zero = 0;
int var_11 = 1814693763;
signed char var_12 = (signed char)-47;
long long int var_13 = 1019154798542970349LL;
long long int var_14 = 2138563766216874568LL;
long long int arr_3 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 9152006782137627761LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
