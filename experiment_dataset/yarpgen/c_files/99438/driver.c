#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)51;
int var_2 = 1906445523;
unsigned long long int var_3 = 14142239293279878178ULL;
long long int var_5 = -6944032464765758835LL;
unsigned long long int var_6 = 2789891556555335332ULL;
unsigned long long int var_7 = 1672786058963768984ULL;
unsigned char var_9 = (unsigned char)136;
unsigned char var_10 = (unsigned char)87;
int zero = 0;
long long int var_11 = 4712730581292922166LL;
unsigned short var_12 = (unsigned short)8675;
unsigned short var_13 = (unsigned short)50722;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
