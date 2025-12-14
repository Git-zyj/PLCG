#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4462983040468435312LL;
signed char var_1 = (signed char)-65;
long long int var_2 = 5572103253941616819LL;
unsigned long long int var_3 = 2058959715559709205ULL;
signed char var_4 = (signed char)-110;
unsigned long long int var_6 = 18258161847610217063ULL;
_Bool var_7 = (_Bool)0;
long long int var_8 = -6442812387530673615LL;
int var_9 = 513785486;
int zero = 0;
signed char var_10 = (signed char)-106;
unsigned long long int var_11 = 9271253528998814427ULL;
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
