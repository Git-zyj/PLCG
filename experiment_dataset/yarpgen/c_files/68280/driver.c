#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1683923879;
_Bool var_5 = (_Bool)1;
int zero = 0;
long long int var_12 = 7564258364064995082LL;
int var_13 = -799546794;
signed char var_14 = (signed char)35;
unsigned long long int var_15 = 11180203194802897236ULL;
short var_16 = (short)-17429;
unsigned long long int arr_0 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 18181043313941730574ULL;
}

void checksum() {
    hash(&seed, var_12);
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
