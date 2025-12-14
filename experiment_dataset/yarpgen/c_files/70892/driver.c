#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-2;
unsigned long long int var_6 = 17542279739518914975ULL;
unsigned char var_7 = (unsigned char)52;
unsigned short var_9 = (unsigned short)43977;
int zero = 0;
signed char var_17 = (signed char)-83;
unsigned long long int var_18 = 11763426497159642155ULL;
long long int var_19 = -4495778759885824218LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
