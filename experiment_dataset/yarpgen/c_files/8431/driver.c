#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6719617132827178269LL;
unsigned short var_2 = (unsigned short)6729;
unsigned char var_6 = (unsigned char)189;
unsigned short var_8 = (unsigned short)3637;
int zero = 0;
long long int var_15 = -3070080044593929014LL;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
