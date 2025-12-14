#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
signed char var_2 = (signed char)-58;
long long int var_4 = -2170855322820766263LL;
unsigned char var_9 = (unsigned char)26;
unsigned int var_11 = 3164858191U;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = 3562406426602150696LL;
signed char var_21 = (signed char)60;
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
