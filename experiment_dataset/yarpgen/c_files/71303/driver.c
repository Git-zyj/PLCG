#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2739553712758568690LL;
unsigned char var_5 = (unsigned char)82;
signed char var_9 = (signed char)62;
unsigned short var_12 = (unsigned short)25262;
unsigned short var_18 = (unsigned short)6895;
int zero = 0;
unsigned char var_20 = (unsigned char)154;
unsigned char var_21 = (unsigned char)255;
signed char var_22 = (signed char)-27;
unsigned int var_23 = 3067367305U;
int arr_0 [14] ;
unsigned char arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -127730571;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)238;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
