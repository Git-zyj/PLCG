#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1497231401;
long long int var_1 = 1471301901840703539LL;
unsigned char var_2 = (unsigned char)101;
unsigned char var_3 = (unsigned char)14;
long long int var_7 = 874917949680285043LL;
long long int var_8 = 3886289132490069121LL;
int zero = 0;
long long int var_10 = 4475098507767749347LL;
long long int var_11 = -8810898359450395595LL;
int var_12 = -1046299930;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
