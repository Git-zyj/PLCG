#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2123252771U;
unsigned char var_4 = (unsigned char)89;
long long int var_5 = 1866579874990416750LL;
long long int var_6 = 5728119237993851659LL;
long long int var_8 = 8233177464262183540LL;
long long int var_9 = 642960897525185619LL;
unsigned int var_11 = 418465152U;
unsigned long long int var_13 = 4233792084115980209ULL;
unsigned short var_17 = (unsigned short)41403;
unsigned int var_18 = 485178961U;
int zero = 0;
unsigned short var_19 = (unsigned short)27347;
int var_20 = 370064583;
unsigned short var_21 = (unsigned short)35182;
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
