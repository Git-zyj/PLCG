#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5551197317548640706ULL;
signed char var_8 = (signed char)-43;
unsigned long long int var_10 = 14707221249844139908ULL;
long long int var_17 = 6456380580494457290LL;
int zero = 0;
int var_18 = -1311953123;
int var_19 = 427420260;
short var_20 = (short)-7888;
unsigned char var_21 = (unsigned char)14;
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
