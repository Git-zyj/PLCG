#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -685306111;
signed char var_4 = (signed char)-73;
unsigned int var_6 = 136555705U;
signed char var_12 = (signed char)16;
long long int var_13 = -6723805769617282574LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)159;
long long int var_21 = 5577648325641402610LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
