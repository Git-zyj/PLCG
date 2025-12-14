#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39549;
unsigned short var_2 = (unsigned short)17408;
unsigned int var_3 = 1994103564U;
unsigned int var_4 = 406213352U;
short var_6 = (short)-6359;
long long int var_7 = 7544325578481453369LL;
short var_8 = (short)-16387;
unsigned long long int var_10 = 3898596759394599117ULL;
unsigned short var_12 = (unsigned short)51501;
signed char var_13 = (signed char)-43;
int zero = 0;
short var_14 = (short)17775;
unsigned int var_15 = 4189879151U;
short var_16 = (short)-24788;
short var_17 = (short)6138;
int var_18 = -716529834;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
