#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)38388;
_Bool var_6 = (_Bool)0;
long long int var_8 = -1960287141813828710LL;
unsigned long long int var_10 = 7285655974859853577ULL;
unsigned short var_13 = (unsigned short)41056;
unsigned short var_17 = (unsigned short)52960;
int zero = 0;
signed char var_18 = (signed char)-103;
long long int var_19 = -5601372780072108440LL;
long long int var_20 = 4932893825693878539LL;
long long int var_21 = 7276776856468317447LL;
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
