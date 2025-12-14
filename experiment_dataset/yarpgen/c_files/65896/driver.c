#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-61;
signed char var_5 = (signed char)60;
unsigned char var_8 = (unsigned char)87;
unsigned int var_13 = 646000326U;
unsigned int var_16 = 500819354U;
int zero = 0;
unsigned long long int var_17 = 1005951538529999370ULL;
long long int var_18 = -5010312463070802118LL;
long long int var_19 = -5744339573330502058LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
