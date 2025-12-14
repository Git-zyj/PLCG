#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18140880020213908783ULL;
unsigned long long int var_10 = 1150118353550066661ULL;
unsigned char var_11 = (unsigned char)70;
unsigned long long int var_14 = 15808686673824965392ULL;
int zero = 0;
unsigned long long int var_20 = 9641240566415337508ULL;
unsigned int var_21 = 3514004480U;
unsigned char var_22 = (unsigned char)177;
unsigned int var_23 = 428360920U;
long long int var_24 = -8054919041325951951LL;
unsigned char var_25 = (unsigned char)32;
unsigned int var_26 = 895500729U;
unsigned short arr_7 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)5354;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
