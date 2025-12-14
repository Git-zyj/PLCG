#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)191;
long long int var_1 = 3088324162366604519LL;
signed char var_3 = (signed char)14;
long long int var_5 = 8331140555057913582LL;
unsigned char var_6 = (unsigned char)105;
long long int var_7 = -5312252830008549630LL;
unsigned char var_9 = (unsigned char)72;
int zero = 0;
long long int var_10 = -5298917027166446967LL;
unsigned char var_11 = (unsigned char)80;
signed char var_12 = (signed char)101;
unsigned int var_13 = 527115010U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
