#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-1;
signed char var_6 = (signed char)59;
long long int var_8 = -471669926594357689LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_12 = -7898487771142340570LL;
unsigned short var_13 = (unsigned short)22541;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
