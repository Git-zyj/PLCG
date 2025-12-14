#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5201982131573823732LL;
long long int var_2 = -1426597966407442675LL;
signed char var_6 = (signed char)-38;
unsigned short var_10 = (unsigned short)56713;
unsigned int var_16 = 3054506007U;
long long int var_18 = 1266525854085204959LL;
int zero = 0;
signed char var_20 = (signed char)-101;
signed char var_21 = (signed char)-77;
int var_22 = 1939666984;
unsigned char arr_0 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)155;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
