#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7557760176277012075LL;
unsigned short var_1 = (unsigned short)7999;
long long int var_3 = 2862503009270343130LL;
short var_5 = (short)22043;
unsigned char var_7 = (unsigned char)187;
signed char var_9 = (signed char)115;
int zero = 0;
long long int var_11 = 3781156064705810655LL;
long long int var_12 = -3231422699491168878LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
