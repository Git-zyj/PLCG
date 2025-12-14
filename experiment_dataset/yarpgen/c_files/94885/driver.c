#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6553423169928233694LL;
long long int var_1 = -3773147079608695291LL;
_Bool var_2 = (_Bool)1;
short var_5 = (short)2111;
unsigned long long int var_6 = 16491516985074380472ULL;
int var_7 = -156338517;
unsigned int var_10 = 3307060782U;
long long int var_11 = -4951627745344263996LL;
int zero = 0;
unsigned long long int var_13 = 4901268492495135836ULL;
long long int var_14 = 3233237833103456742LL;
short var_15 = (short)11438;
int var_16 = 706112192;
long long int var_17 = 5132353707308181199LL;
signed char arr_8 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)-68;
}

void checksum() {
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
