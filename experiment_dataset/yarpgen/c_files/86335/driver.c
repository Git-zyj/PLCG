#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = 557444891;
unsigned int var_4 = 1341188559U;
int var_5 = -1728335342;
long long int var_6 = -3772433260689892879LL;
unsigned char var_7 = (unsigned char)87;
unsigned long long int var_9 = 13600440153169584621ULL;
signed char var_10 = (signed char)78;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 4259967186U;
_Bool var_14 = (_Bool)1;
long long int var_15 = 8009671330826018473LL;
unsigned long long int var_16 = 2719824694061596932ULL;
int zero = 0;
unsigned int var_18 = 1848927502U;
unsigned short var_19 = (unsigned short)28178;
int var_20 = 1943720599;
unsigned char var_21 = (unsigned char)27;
unsigned char var_22 = (unsigned char)161;
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
