#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49323;
_Bool var_1 = (_Bool)0;
signed char var_8 = (signed char)38;
unsigned char var_11 = (unsigned char)188;
unsigned long long int var_12 = 5012548401453569095ULL;
long long int var_13 = 9169131359891852289LL;
long long int var_14 = 8209120122344210835LL;
int zero = 0;
unsigned char var_18 = (unsigned char)77;
signed char var_19 = (signed char)44;
long long int var_20 = -3933276786400774767LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
