#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3272796824U;
unsigned long long int var_6 = 3908029219158503937ULL;
unsigned char var_8 = (unsigned char)254;
unsigned char var_9 = (unsigned char)204;
signed char var_13 = (signed char)-127;
_Bool var_15 = (_Bool)1;
unsigned int var_19 = 2389707805U;
int zero = 0;
unsigned char var_20 = (unsigned char)26;
long long int var_21 = -3909849224913733930LL;
void init() {
}

void checksum() {
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
