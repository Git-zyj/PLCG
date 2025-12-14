#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)8699;
unsigned char var_9 = (unsigned char)162;
signed char var_11 = (signed char)14;
unsigned short var_15 = (unsigned short)27023;
int zero = 0;
long long int var_18 = -2898863042349441185LL;
int var_19 = 23268403;
unsigned long long int var_20 = 12703123594137334045ULL;
int var_21 = -705360010;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
