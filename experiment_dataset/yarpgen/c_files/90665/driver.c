#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1778100027;
unsigned int var_1 = 2389214480U;
unsigned int var_3 = 2902526374U;
unsigned short var_8 = (unsigned short)10760;
unsigned int var_12 = 1987483767U;
unsigned int var_15 = 2846008706U;
int zero = 0;
int var_18 = -80603812;
long long int var_19 = -3403781184444410376LL;
int var_20 = 932694042;
int var_21 = 1820226694;
long long int var_22 = 5799054932572457088LL;
long long int var_23 = -5776147998173383774LL;
int arr_3 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -1015463824;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
