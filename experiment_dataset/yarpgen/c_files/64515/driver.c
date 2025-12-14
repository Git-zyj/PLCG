#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22219;
int var_4 = -1920108756;
long long int var_6 = -3920238465084054674LL;
signed char var_7 = (signed char)5;
unsigned long long int var_11 = 14453807608605341310ULL;
long long int var_13 = -991935516708519643LL;
signed char var_14 = (signed char)103;
long long int var_16 = -8628663841157218102LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -593979097;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)120;
int var_21 = -995458595;
int arr_1 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 692141020;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
