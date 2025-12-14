#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3708956589933851950ULL;
unsigned short var_5 = (unsigned short)15237;
short var_8 = (short)-15337;
short var_11 = (short)3338;
unsigned short var_19 = (unsigned short)21476;
int zero = 0;
short var_20 = (short)23913;
unsigned long long int var_21 = 15468579482027132013ULL;
long long int var_22 = -6391128212242053791LL;
unsigned char var_23 = (unsigned char)139;
long long int var_24 = -9215504190799914390LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
