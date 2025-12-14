#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6101882856451451279ULL;
unsigned long long int var_7 = 16942920701967864680ULL;
unsigned long long int var_13 = 5385885126029738800ULL;
int zero = 0;
unsigned long long int var_17 = 17111117596958702471ULL;
short var_18 = (short)2428;
unsigned long long int var_19 = 8356442008426754651ULL;
short var_20 = (short)32127;
short var_21 = (short)11383;
unsigned long long int arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 16901099528343393689ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
