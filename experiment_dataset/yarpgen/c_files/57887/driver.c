#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-39;
int var_2 = -946785040;
int var_4 = 1638274573;
unsigned long long int var_7 = 4710068756723450059ULL;
signed char var_9 = (signed char)11;
int zero = 0;
unsigned short var_10 = (unsigned short)50311;
signed char var_11 = (signed char)-124;
long long int var_12 = 2009444433937098807LL;
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
