#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 636595238070847267LL;
long long int var_4 = -6361818366525332797LL;
long long int var_13 = 2722396097188908299LL;
int zero = 0;
unsigned short var_16 = (unsigned short)27324;
unsigned int var_17 = 540030859U;
long long int var_18 = -7826162663801023881LL;
unsigned char var_19 = (unsigned char)13;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
