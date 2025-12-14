#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-108;
long long int var_7 = -1544380612820446394LL;
long long int var_9 = 6302208103516225603LL;
int zero = 0;
long long int var_14 = 1053692194569235417LL;
unsigned short var_15 = (unsigned short)37996;
void init() {
}

void checksum() {
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
