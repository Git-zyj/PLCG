#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1169717790;
unsigned char var_5 = (unsigned char)159;
unsigned short var_15 = (unsigned short)32654;
long long int var_16 = 5834704775579195377LL;
short var_17 = (short)4955;
int zero = 0;
unsigned char var_20 = (unsigned char)204;
unsigned long long int var_21 = 12699647837019269759ULL;
_Bool var_22 = (_Bool)0;
void init() {
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
