#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3148576787877204614LL;
long long int var_5 = -581517416059533833LL;
_Bool var_6 = (_Bool)0;
int var_7 = -1420519377;
unsigned char var_8 = (unsigned char)30;
unsigned char var_9 = (unsigned char)0;
signed char var_10 = (signed char)45;
int zero = 0;
unsigned short var_12 = (unsigned short)25343;
long long int var_13 = 1876714336828436198LL;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)164;
unsigned short var_16 = (unsigned short)51136;
signed char var_17 = (signed char)-5;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)103;
unsigned char arr_0 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)204;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
