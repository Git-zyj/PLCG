#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9356981572082416944ULL;
long long int var_12 = -2620494364566778485LL;
long long int var_13 = 9164256431401036210LL;
unsigned int var_15 = 1393615149U;
int zero = 0;
unsigned long long int var_18 = 8528420333503643070ULL;
unsigned long long int var_19 = 14641577243249355130ULL;
unsigned int var_20 = 49225924U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
