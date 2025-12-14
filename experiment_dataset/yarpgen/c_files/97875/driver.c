#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2388830791976255767LL;
short var_2 = (short)-20204;
long long int var_4 = -1929754440785752362LL;
int var_6 = -234242797;
short var_9 = (short)-27816;
long long int var_10 = -5987277909170062587LL;
long long int var_11 = 4397953718179665678LL;
int zero = 0;
unsigned char var_13 = (unsigned char)46;
short var_14 = (short)-27989;
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
