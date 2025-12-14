#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18241986308575844997ULL;
unsigned char var_4 = (unsigned char)45;
signed char var_6 = (signed char)78;
signed char var_7 = (signed char)10;
unsigned long long int var_8 = 687575551253764054ULL;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)-112;
long long int var_14 = 3400272628982202474LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
