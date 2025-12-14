#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
unsigned int var_3 = 3995183119U;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)205;
signed char var_7 = (signed char)112;
unsigned short var_9 = (unsigned short)5690;
long long int var_11 = -456710172143004163LL;
signed char var_14 = (signed char)119;
int zero = 0;
signed char var_20 = (signed char)-79;
int var_21 = -660767696;
long long int var_22 = -5774565670820353040LL;
unsigned long long int var_23 = 9315341831405415492ULL;
unsigned char var_24 = (unsigned char)214;
int var_25 = -580433749;
unsigned char arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)155;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
