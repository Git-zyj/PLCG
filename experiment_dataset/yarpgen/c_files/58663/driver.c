#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17945388471415420910ULL;
unsigned long long int var_15 = 6121661848150576399ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)20662;
int var_20 = -1308928344;
long long int var_21 = -9099289635537747647LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
