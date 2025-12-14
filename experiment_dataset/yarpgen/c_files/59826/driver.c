#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3420460622976193585LL;
long long int var_3 = 8966027968873446954LL;
int var_7 = 630000366;
unsigned char var_8 = (unsigned char)22;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_13 = -295067674;
unsigned long long int var_14 = 3602536953957003831ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
