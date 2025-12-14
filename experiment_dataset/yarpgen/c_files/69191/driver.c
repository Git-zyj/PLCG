#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 703561060U;
signed char var_5 = (signed char)-64;
unsigned short var_6 = (unsigned short)35011;
unsigned int var_7 = 2053790698U;
int var_9 = 1781390177;
unsigned long long int var_10 = 15458999721336100549ULL;
int zero = 0;
long long int var_12 = 8746084054614667802LL;
unsigned int var_13 = 953802975U;
signed char var_14 = (signed char)68;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
