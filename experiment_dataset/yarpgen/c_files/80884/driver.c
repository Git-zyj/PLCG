#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12882908842986155581ULL;
unsigned long long int var_13 = 2987154621406488943ULL;
int zero = 0;
unsigned int var_18 = 2526855443U;
unsigned long long int var_19 = 17127406560015008560ULL;
unsigned long long int var_20 = 7630325213225843050ULL;
unsigned int var_21 = 2771326969U;
unsigned long long int var_22 = 15484524039934356855ULL;
unsigned int arr_0 [22] ;
unsigned long long int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1906326630U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 2764941997995150949ULL;
}

void checksum() {
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
