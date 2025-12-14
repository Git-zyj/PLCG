#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1505779085718013458LL;
short var_2 = (short)1289;
unsigned long long int var_4 = 18280526497590837255ULL;
long long int var_5 = 5057602554108779859LL;
unsigned int var_10 = 2806823623U;
short var_12 = (short)-6754;
short var_15 = (short)15511;
int zero = 0;
short var_18 = (short)-27771;
int var_19 = -2032334559;
short var_20 = (short)32279;
unsigned int var_21 = 2021455448U;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
