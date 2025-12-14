#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -2883284672386652110LL;
signed char var_5 = (signed char)101;
signed char var_10 = (signed char)-90;
int zero = 0;
signed char var_12 = (signed char)-26;
signed char var_13 = (signed char)-5;
long long int var_14 = -475892067958106339LL;
signed char var_15 = (signed char)47;
long long int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 6816801183077100760LL;
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
