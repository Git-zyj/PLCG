#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 16417534463276920307ULL;
long long int var_8 = -3176581986120085892LL;
signed char var_9 = (signed char)102;
long long int var_11 = 6729819660634751128LL;
unsigned char var_15 = (unsigned char)98;
short var_18 = (short)6567;
int zero = 0;
int var_20 = -933257154;
unsigned short var_21 = (unsigned short)25839;
short var_22 = (short)9960;
int var_23 = 242262614;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
