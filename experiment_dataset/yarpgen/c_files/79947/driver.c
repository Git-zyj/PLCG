#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3257173258U;
unsigned char var_1 = (unsigned char)13;
_Bool var_2 = (_Bool)0;
unsigned long long int var_5 = 3003514137735850850ULL;
signed char var_7 = (signed char)35;
long long int var_9 = -3468092144950945998LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 1167404847U;
unsigned int var_17 = 2714289117U;
signed char var_18 = (signed char)31;
void init() {
}

void checksum() {
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
