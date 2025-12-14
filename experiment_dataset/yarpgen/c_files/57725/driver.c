#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3810893021944140729ULL;
long long int var_3 = -1655621428154313144LL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 7135276007124190144ULL;
int zero = 0;
unsigned long long int var_13 = 968822784340143755ULL;
unsigned char var_14 = (unsigned char)205;
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
