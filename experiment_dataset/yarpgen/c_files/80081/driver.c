#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1484325586974511040LL;
long long int var_4 = -4513121351159372252LL;
unsigned long long int var_5 = 13775020676037005776ULL;
long long int var_10 = 8613056489745166055LL;
unsigned long long int var_14 = 1998344803211050888ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)100;
unsigned long long int var_18 = 18404737235820078147ULL;
void init() {
}

void checksum() {
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
