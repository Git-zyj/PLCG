#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1440840314;
unsigned int var_2 = 3654215629U;
int var_3 = 2109701914;
int var_4 = -1091895800;
short var_5 = (short)24653;
short var_6 = (short)29954;
short var_7 = (short)27411;
unsigned int var_8 = 4291032211U;
long long int var_9 = 6748801436313554598LL;
unsigned char var_10 = (unsigned char)108;
unsigned char var_11 = (unsigned char)17;
int zero = 0;
int var_12 = -494099764;
unsigned char var_13 = (unsigned char)14;
int var_14 = 1579231290;
unsigned long long int var_15 = 7506526436140770858ULL;
unsigned long long int var_16 = 5507821487909142774ULL;
unsigned long long int arr_0 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 186276911973526291ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
