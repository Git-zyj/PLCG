#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)62;
unsigned long long int var_2 = 12063413186932395130ULL;
unsigned long long int var_9 = 16993281374689968441ULL;
signed char var_10 = (signed char)-100;
int zero = 0;
unsigned long long int var_12 = 12471384675831747125ULL;
_Bool var_13 = (_Bool)0;
long long int var_14 = -7723364123847193817LL;
void init() {
}

void checksum() {
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
