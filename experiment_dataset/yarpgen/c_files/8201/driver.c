#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13884919462325122802ULL;
signed char var_2 = (signed char)-93;
short var_6 = (short)26122;
_Bool var_7 = (_Bool)1;
short var_9 = (short)9493;
unsigned long long int var_15 = 13228518725009403182ULL;
int zero = 0;
unsigned long long int var_20 = 16306489683493967726ULL;
short var_21 = (short)10774;
signed char var_22 = (signed char)-79;
unsigned long long int var_23 = 14887601881612634954ULL;
signed char var_24 = (signed char)73;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
