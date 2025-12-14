#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 42715259U;
unsigned int var_1 = 3102055406U;
signed char var_4 = (signed char)-83;
unsigned long long int var_5 = 15566373521170530874ULL;
long long int var_6 = 2118881519164986228LL;
long long int var_7 = -2113846893370911017LL;
int var_8 = -651838399;
int var_9 = -1379639129;
int zero = 0;
unsigned int var_10 = 3851599212U;
unsigned long long int var_11 = 13658058046454952878ULL;
unsigned char var_12 = (unsigned char)244;
long long int var_13 = 5609513530809878941LL;
unsigned int var_14 = 3117681283U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
