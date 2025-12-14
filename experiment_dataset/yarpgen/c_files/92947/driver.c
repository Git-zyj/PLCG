#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17938;
long long int var_3 = 5007075752613127907LL;
signed char var_4 = (signed char)40;
unsigned long long int var_5 = 15477721522253690035ULL;
long long int var_7 = -3009335177296055785LL;
signed char var_8 = (signed char)-38;
int zero = 0;
unsigned short var_10 = (unsigned short)18177;
unsigned long long int var_11 = 1484060749123937085ULL;
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
