#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22650;
unsigned short var_4 = (unsigned short)17958;
unsigned short var_5 = (unsigned short)5524;
long long int var_7 = -3501521727042609594LL;
unsigned int var_11 = 2096876912U;
int var_12 = -695844988;
short var_13 = (short)-4377;
unsigned int var_15 = 3676584684U;
unsigned int var_16 = 709190423U;
int zero = 0;
int var_17 = 1254538081;
long long int var_18 = 3188595840937867207LL;
void init() {
}

void checksum() {
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
