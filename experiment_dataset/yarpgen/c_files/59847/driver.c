#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-63;
long long int var_7 = 9096540794553637074LL;
unsigned int var_9 = 4063108352U;
signed char var_10 = (signed char)-10;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 4082555860U;
int zero = 0;
unsigned char var_17 = (unsigned char)229;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
