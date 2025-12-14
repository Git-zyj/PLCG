#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 675873708494728339ULL;
long long int var_7 = -879971366354242662LL;
long long int var_12 = -8359903429554489815LL;
int zero = 0;
long long int var_14 = 1310983733764413104LL;
int var_15 = -1574296814;
unsigned long long int var_16 = 1884196267396005497ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
