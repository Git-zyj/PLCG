#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
_Bool var_4 = (_Bool)1;
long long int var_6 = -8477952768958860426LL;
_Bool var_7 = (_Bool)1;
int zero = 0;
long long int var_10 = -7362403704334715013LL;
unsigned char var_11 = (unsigned char)90;
long long int var_12 = 1454097410377567760LL;
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
