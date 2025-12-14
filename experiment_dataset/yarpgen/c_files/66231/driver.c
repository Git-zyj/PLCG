#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)41;
long long int var_3 = -6578512573580065565LL;
long long int var_5 = -8592458989883602947LL;
unsigned char var_9 = (unsigned char)104;
unsigned int var_10 = 3599820846U;
int zero = 0;
short var_11 = (short)-15300;
long long int var_12 = 8328040071183119452LL;
signed char var_13 = (signed char)-69;
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
