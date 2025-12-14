#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1147660806;
unsigned long long int var_9 = 9932944651960501214ULL;
unsigned long long int var_15 = 4428457326343489419ULL;
signed char var_16 = (signed char)117;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)187;
long long int var_21 = 3079314495291542505LL;
unsigned long long int var_22 = 8265169942739648302ULL;
unsigned char var_23 = (unsigned char)5;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
