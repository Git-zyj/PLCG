#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7187;
unsigned long long int var_3 = 8570672528756772635ULL;
signed char var_4 = (signed char)95;
int var_7 = 1985391791;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)147;
int zero = 0;
int var_11 = 1178227508;
unsigned long long int var_12 = 9326884329866758385ULL;
signed char var_13 = (signed char)90;
long long int var_14 = -8992370906166846889LL;
long long int var_15 = 8129682355700932352LL;
signed char arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-13;
}

void checksum() {
    hash(&seed, var_11);
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
