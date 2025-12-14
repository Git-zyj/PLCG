#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3932990698U;
_Bool var_3 = (_Bool)0;
int var_4 = -1215070804;
unsigned int var_8 = 364331391U;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)26;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -627354036;
signed char var_15 = (signed char)39;
signed char var_16 = (signed char)72;
int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 194032852;
}

void checksum() {
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
