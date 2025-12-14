#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6615355247065021189LL;
int var_5 = -1796052375;
unsigned int var_6 = 2023674157U;
unsigned int var_9 = 3468439832U;
int var_10 = 1129777895;
unsigned char var_12 = (unsigned char)47;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_17 = -7211252289247217652LL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)19972;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
