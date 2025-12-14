#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-4359;
unsigned char var_6 = (unsigned char)0;
long long int var_7 = 125948691329229015LL;
long long int var_9 = 4666707664225818313LL;
int zero = 0;
signed char var_11 = (signed char)-72;
long long int var_12 = -1979218635930745234LL;
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
