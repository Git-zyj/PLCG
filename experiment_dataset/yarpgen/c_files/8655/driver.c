#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 6927515758371818293LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 7926469805938284662ULL;
int zero = 0;
short var_10 = (short)-5766;
unsigned char var_11 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
