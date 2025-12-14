#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13610212479793602572ULL;
unsigned long long int var_3 = 15529233710279341246ULL;
unsigned long long int var_4 = 3888519012787948156ULL;
int zero = 0;
unsigned long long int var_10 = 2430436410633422511ULL;
short var_11 = (short)-26971;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
