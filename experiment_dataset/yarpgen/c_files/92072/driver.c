#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-106;
unsigned long long int var_6 = 1377891128438801812ULL;
unsigned short var_7 = (unsigned short)30091;
signed char var_8 = (signed char)-28;
unsigned long long int var_9 = 2938334568476486906ULL;
int zero = 0;
long long int var_11 = -2578108915947057787LL;
signed char var_12 = (signed char)26;
unsigned long long int var_13 = 2977068259509207568ULL;
int var_14 = 1897132474;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
