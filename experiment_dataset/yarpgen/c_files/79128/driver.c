#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3344773667369517350LL;
long long int var_4 = -4793820679999001171LL;
short var_12 = (short)19376;
int var_16 = 762988439;
signed char var_18 = (signed char)41;
int zero = 0;
signed char var_20 = (signed char)-124;
int var_21 = -2019074737;
unsigned short var_22 = (unsigned short)51715;
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
