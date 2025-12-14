#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)114;
signed char var_1 = (signed char)5;
long long int var_3 = 5808886994799232975LL;
long long int var_5 = 6335921974528351298LL;
signed char var_8 = (signed char)87;
unsigned long long int var_17 = 17217709722097272346ULL;
signed char var_18 = (signed char)-107;
signed char var_19 = (signed char)36;
int zero = 0;
short var_20 = (short)-3464;
short var_21 = (short)-852;
unsigned long long int var_22 = 14848763826560558602ULL;
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
