#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8315493646800743533LL;
long long int var_1 = -293822895435480261LL;
unsigned int var_3 = 2624745046U;
short var_6 = (short)30148;
unsigned short var_8 = (unsigned short)47112;
signed char var_9 = (signed char)-105;
long long int var_10 = -7660643831346810969LL;
int zero = 0;
unsigned int var_11 = 2627440151U;
unsigned int var_12 = 10906012U;
unsigned int var_13 = 2818281891U;
unsigned int arr_6 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 360663401U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
