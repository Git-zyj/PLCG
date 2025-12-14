#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)183;
long long int var_2 = 8710658665914495044LL;
long long int var_3 = -3515476208685699050LL;
long long int var_5 = 1810858966725471282LL;
short var_6 = (short)17933;
long long int var_8 = 8074199511817994365LL;
short var_9 = (short)957;
unsigned char var_10 = (unsigned char)92;
int zero = 0;
unsigned short var_11 = (unsigned short)32681;
long long int var_12 = 3886315169860122344LL;
short var_13 = (short)9191;
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
