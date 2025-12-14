#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-106;
unsigned short var_3 = (unsigned short)9493;
unsigned char var_4 = (unsigned char)167;
long long int var_5 = 6165351324372635693LL;
unsigned char var_6 = (unsigned char)46;
signed char var_7 = (signed char)5;
unsigned short var_8 = (unsigned short)28604;
short var_9 = (short)-16460;
int zero = 0;
signed char var_10 = (signed char)-102;
long long int var_11 = 4906399101669278748LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
