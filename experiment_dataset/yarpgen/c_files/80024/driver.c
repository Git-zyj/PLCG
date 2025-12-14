#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 190108792644024663LL;
unsigned int var_7 = 773112305U;
short var_10 = (short)23290;
unsigned char var_11 = (unsigned char)107;
unsigned short var_12 = (unsigned short)27348;
signed char var_13 = (signed char)-66;
long long int var_14 = -8760823317156619492LL;
short var_16 = (short)-12528;
int zero = 0;
long long int var_18 = 88818683435063429LL;
long long int var_19 = 2247158473600954906LL;
long long int var_20 = -8795956610084320934LL;
long long int var_21 = -4019925787496346728LL;
unsigned short var_22 = (unsigned short)31050;
short var_23 = (short)-10690;
unsigned int var_24 = 2519000670U;
unsigned short var_25 = (unsigned short)6936;
long long int arr_0 [22] ;
short arr_1 [22] ;
long long int arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 5926912562527562830LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)4458;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 8699343659602593481LL : -4503298362619020093LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
