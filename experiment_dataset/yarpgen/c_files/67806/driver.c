#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 7852327516238911290ULL;
unsigned short var_13 = (unsigned short)31517;
unsigned int var_14 = 992544022U;
long long int var_16 = -4374028580056914099LL;
int zero = 0;
long long int var_19 = 1700288479713503833LL;
long long int var_20 = -947712455625059030LL;
signed char var_21 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
