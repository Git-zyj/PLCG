#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)30;
unsigned int var_1 = 2788087577U;
unsigned char var_2 = (unsigned char)209;
signed char var_3 = (signed char)-68;
unsigned char var_4 = (unsigned char)47;
unsigned long long int var_5 = 17296988291398928957ULL;
long long int var_7 = -3854282079166597360LL;
int zero = 0;
long long int var_11 = 2647539297691523189LL;
long long int var_12 = 5215512408558299213LL;
signed char var_13 = (signed char)-105;
unsigned long long int var_14 = 16618076117303328278ULL;
unsigned char var_15 = (unsigned char)38;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
