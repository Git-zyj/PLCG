#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17829013463155775183ULL;
unsigned long long int var_2 = 13655477275144740200ULL;
unsigned char var_3 = (unsigned char)54;
unsigned int var_4 = 3428701976U;
unsigned char var_5 = (unsigned char)245;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 227723704U;
unsigned long long int var_13 = 9909913076247800013ULL;
unsigned long long int var_14 = 6690453660031997336ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
