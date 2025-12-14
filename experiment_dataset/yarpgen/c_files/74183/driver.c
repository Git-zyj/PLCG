#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_5 = 18179862954553566150ULL;
signed char var_6 = (signed char)53;
unsigned char var_7 = (unsigned char)146;
long long int var_9 = -7401379627236123128LL;
int zero = 0;
signed char var_11 = (signed char)-1;
short var_12 = (short)5906;
short var_13 = (short)21071;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
