#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1927394683532176025LL;
long long int var_3 = -7640029347887800497LL;
int var_4 = 1555831587;
int var_9 = -769035344;
int var_12 = -1981066312;
unsigned long long int var_15 = 558103553633890398ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)43624;
long long int var_20 = -3292316772279149742LL;
int var_21 = -1331336247;
long long int var_22 = 5021131990496733517LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
