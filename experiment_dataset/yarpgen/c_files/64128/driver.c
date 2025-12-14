#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-111;
unsigned short var_2 = (unsigned short)22649;
_Bool var_3 = (_Bool)1;
signed char var_7 = (signed char)106;
unsigned short var_9 = (unsigned short)10791;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)21325;
int zero = 0;
signed char var_13 = (signed char)20;
unsigned short var_14 = (unsigned short)38589;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
