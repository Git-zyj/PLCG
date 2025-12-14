#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-80;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 15074197716145935427ULL;
unsigned int var_8 = 918538823U;
int var_9 = -956829215;
unsigned int var_12 = 3357241315U;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-62;
unsigned long long int var_19 = 3930215696030353607ULL;
int zero = 0;
unsigned int var_20 = 3073787719U;
long long int var_21 = 4711531136317936526LL;
unsigned int var_22 = 206046469U;
_Bool var_23 = (_Bool)1;
int var_24 = -589506283;
signed char arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)99;
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
