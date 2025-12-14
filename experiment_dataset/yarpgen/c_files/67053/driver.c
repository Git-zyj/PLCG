#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-127;
unsigned int var_4 = 2736336293U;
signed char var_7 = (signed char)121;
int var_9 = -326091330;
int zero = 0;
unsigned int var_10 = 3076968641U;
unsigned long long int var_11 = 9939007999276193894ULL;
short var_12 = (short)7696;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
