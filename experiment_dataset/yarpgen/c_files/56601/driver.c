#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17073287806578660637ULL;
unsigned long long int var_1 = 12610026993108557959ULL;
unsigned long long int var_4 = 6056527115903017615ULL;
unsigned long long int var_5 = 6619230766648854606ULL;
unsigned long long int var_15 = 4408829766226123396ULL;
unsigned long long int var_19 = 10477775694205826197ULL;
int zero = 0;
unsigned long long int var_20 = 185693612253896774ULL;
unsigned long long int var_21 = 2923077391770025871ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
