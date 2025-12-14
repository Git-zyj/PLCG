#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)24357;
unsigned long long int var_7 = 6476958827471760767ULL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 1120263643081338670ULL;
unsigned long long int var_10 = 8181452955422749345ULL;
unsigned int var_11 = 2716097168U;
int zero = 0;
unsigned long long int var_18 = 9332979639678093422ULL;
int var_19 = -178847573;
long long int var_20 = -657714969588835569LL;
unsigned long long int arr_2 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 3537106087127476395ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
