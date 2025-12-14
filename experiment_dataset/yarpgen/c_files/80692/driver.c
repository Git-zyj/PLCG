#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22146;
unsigned long long int var_3 = 3573466361466603722ULL;
signed char var_4 = (signed char)47;
int var_5 = 1633695271;
unsigned long long int var_7 = 349759189939798422ULL;
long long int var_9 = 1605413470467007810LL;
long long int var_10 = -8291827635397865895LL;
unsigned short var_11 = (unsigned short)39125;
_Bool var_12 = (_Bool)1;
int var_14 = 988171170;
int zero = 0;
int var_16 = 1779387121;
unsigned char var_17 = (unsigned char)153;
unsigned long long int var_18 = 1645224298123283146ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
