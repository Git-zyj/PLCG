#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
short var_2 = (short)19467;
short var_4 = (short)1436;
unsigned int var_8 = 3841856704U;
unsigned short var_10 = (unsigned short)57458;
int zero = 0;
signed char var_11 = (signed char)-56;
unsigned long long int var_12 = 6054653665785117545ULL;
short var_13 = (short)3983;
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
