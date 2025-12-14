#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65239;
unsigned char var_3 = (unsigned char)141;
unsigned short var_4 = (unsigned short)18047;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)164;
unsigned short var_7 = (unsigned short)1978;
unsigned char var_9 = (unsigned char)226;
unsigned long long int var_10 = 4871691657493525757ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)9895;
unsigned long long int var_12 = 5868335919273138567ULL;
unsigned long long int var_13 = 4856165940187016350ULL;
signed char var_14 = (signed char)-38;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
