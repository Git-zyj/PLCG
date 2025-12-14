#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 17933946822015048866ULL;
int var_10 = -2062878374;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 12059540426798507507ULL;
int var_21 = -2008989864;
int var_22 = 1083518211;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)82;
unsigned long long int arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 12875430406055768175ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
