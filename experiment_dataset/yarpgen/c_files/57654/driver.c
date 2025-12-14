#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3562261492U;
int var_5 = -1793757918;
unsigned long long int var_6 = 12500340296897636567ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)39;
int zero = 0;
unsigned int var_17 = 2085806049U;
unsigned long long int var_18 = 14840045279423001151ULL;
unsigned int var_19 = 3145813168U;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 8128469091396539805ULL;
unsigned int arr_5 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 1036370061U;
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
