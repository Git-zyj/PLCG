#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3080041390512589079LL;
long long int var_3 = 6422675048252680259LL;
long long int var_6 = 2765928646453731726LL;
long long int var_10 = -6879870127089832661LL;
int zero = 0;
long long int var_12 = 4226818498030733998LL;
long long int var_13 = 4229383275094252182LL;
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
