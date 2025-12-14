#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)115;
long long int var_7 = -8489602779658474442LL;
signed char var_9 = (signed char)-33;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 8743700232037178859LL;
long long int var_17 = 7117995801496361527LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
