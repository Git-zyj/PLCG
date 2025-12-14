#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12156345981820747766ULL;
unsigned int var_3 = 102324068U;
long long int var_5 = 6164157222357172081LL;
int zero = 0;
unsigned char var_11 = (unsigned char)226;
unsigned long long int var_12 = 1009556328947345849ULL;
void init() {
}

void checksum() {
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
