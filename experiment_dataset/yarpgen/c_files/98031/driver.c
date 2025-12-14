#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-19225;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
signed char var_18 = (signed char)-74;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-103;
unsigned char var_21 = (unsigned char)196;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
