#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3070768994956864978LL;
long long int var_5 = -7009799413858648240LL;
short var_7 = (short)791;
unsigned int var_10 = 895365057U;
int zero = 0;
unsigned short var_16 = (unsigned short)47366;
unsigned short var_17 = (unsigned short)54652;
short var_18 = (short)7612;
short arr_3 [22] [22] ;
short arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-18325;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)-7775;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
