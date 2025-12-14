#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)103;
long long int var_2 = 3667630056689533400LL;
long long int var_7 = 5428259926728166278LL;
int var_9 = -343302508;
unsigned int var_11 = 3616069360U;
int zero = 0;
long long int var_13 = 1058902120639404899LL;
unsigned char var_14 = (unsigned char)244;
long long int var_15 = 2041981999469337573LL;
unsigned short var_16 = (unsigned short)40288;
unsigned char var_17 = (unsigned char)66;
int var_18 = -1406356637;
unsigned long long int var_19 = 503550360121386640ULL;
int arr_3 [24] ;
long long int arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -476093337;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = -1943171307348308290LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
