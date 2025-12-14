#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5144802837372830887LL;
unsigned char var_6 = (unsigned char)174;
long long int var_8 = 1046744697114698212LL;
int var_10 = 1957733249;
unsigned int var_13 = 3558590408U;
int zero = 0;
unsigned short var_14 = (unsigned short)48931;
unsigned int var_15 = 2252540759U;
long long int var_16 = 4274952290190139563LL;
short var_17 = (short)23744;
unsigned int arr_3 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3417627419U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
