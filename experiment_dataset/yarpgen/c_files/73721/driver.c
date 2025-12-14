#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18079;
long long int var_1 = -2720210320526229561LL;
unsigned short var_3 = (unsigned short)35056;
long long int var_4 = 3083696598072765937LL;
int var_8 = 1549203027;
int zero = 0;
int var_10 = 425126025;
long long int var_11 = -1752127559693623535LL;
int var_12 = 1907374952;
int var_13 = 1896168322;
int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -1287369949;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
