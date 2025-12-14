#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1994255898393785644LL;
unsigned short var_1 = (unsigned short)22119;
int var_6 = -1952741924;
unsigned int var_7 = 1534206888U;
int var_9 = -66735242;
int zero = 0;
unsigned short var_12 = (unsigned short)36514;
short var_13 = (short)26828;
long long int var_14 = -8741676404339104984LL;
signed char var_15 = (signed char)-90;
short arr_1 [19] [19] ;
_Bool arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-10626;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
