#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9072136149967782728ULL;
unsigned long long int var_1 = 3997777547192368300ULL;
long long int var_7 = -8076020698246234715LL;
unsigned long long int var_9 = 3146964155858095613ULL;
signed char var_11 = (signed char)121;
int zero = 0;
signed char var_12 = (signed char)-104;
unsigned long long int var_13 = 6385647888873616822ULL;
long long int var_14 = -889875093095662721LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
