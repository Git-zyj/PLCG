#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 580424392;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1301757942U;
int var_4 = 1675753868;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-78;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 14634527900062451210ULL;
unsigned int var_9 = 1723541883U;
int zero = 0;
signed char var_10 = (signed char)-74;
long long int var_11 = 1233881636126876626LL;
long long int var_12 = -4063400186642425955LL;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 4186931262311338183ULL;
long long int var_15 = 4004559435829746601LL;
unsigned int var_16 = 4137683570U;
long long int var_17 = -1069850012661101731LL;
unsigned long long int arr_1 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 12172320339481296665ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
