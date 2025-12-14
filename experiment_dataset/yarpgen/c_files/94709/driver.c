#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-82;
signed char var_8 = (signed char)50;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-30;
int zero = 0;
unsigned char var_19 = (unsigned char)1;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)78;
unsigned int var_22 = 4018467987U;
signed char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)-125;
}

void checksum() {
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
