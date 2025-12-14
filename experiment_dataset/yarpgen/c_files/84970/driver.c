#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-95;
unsigned long long int var_4 = 5788196996421169645ULL;
long long int var_18 = -2944079546595574159LL;
int zero = 0;
long long int var_20 = -689722271607989972LL;
long long int var_21 = -5563654258418495052LL;
signed char var_22 = (signed char)-26;
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
