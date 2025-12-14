#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-118;
unsigned int var_11 = 2606597357U;
unsigned int var_14 = 1469707165U;
int zero = 0;
signed char var_16 = (signed char)-18;
long long int var_17 = -853469838885285914LL;
long long int var_18 = -6530782516469847703LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
