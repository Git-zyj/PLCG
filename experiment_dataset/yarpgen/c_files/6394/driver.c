#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3265256636891473623LL;
long long int var_4 = 7414401198683004819LL;
long long int var_8 = 1675509929773609457LL;
long long int var_9 = 490276985233433893LL;
long long int var_12 = 5833397499040933994LL;
int zero = 0;
long long int var_13 = -906344115768771304LL;
long long int var_14 = -6900599395888612605LL;
long long int var_15 = 2622618698733136397LL;
long long int var_16 = -5797584138236791348LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
