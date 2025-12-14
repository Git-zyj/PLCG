#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2513890849965201209LL;
long long int var_1 = 3912641999881629856LL;
long long int var_2 = 6357318767030120364LL;
long long int var_4 = -477152596227169417LL;
long long int var_6 = 6818348011621911501LL;
long long int var_7 = -6410597991270226923LL;
long long int var_8 = -6204641975525221965LL;
long long int var_9 = 5834647308727761496LL;
int zero = 0;
long long int var_10 = 2772532469034239442LL;
long long int var_11 = 9198296170660260022LL;
long long int var_12 = -8705949389420245720LL;
long long int var_13 = -3110043905239592037LL;
long long int var_14 = 917072194021068159LL;
long long int var_15 = 2553856199855102187LL;
long long int var_16 = 4931609083605289286LL;
long long int var_17 = -3347674226203736967LL;
long long int var_18 = 7934385942081336222LL;
long long int var_19 = -1995021543462706637LL;
long long int var_20 = -5635867176548046656LL;
long long int var_21 = 7851372271976755150LL;
long long int var_22 = -5313657250401037139LL;
long long int var_23 = 8972784887109251317LL;
long long int var_24 = 6607887831623088144LL;
long long int var_25 = 6098328445203193052LL;
long long int var_26 = -1049072046386542339LL;
long long int arr_0 [23] ;
long long int arr_1 [23] ;
long long int arr_2 [16] ;
long long int arr_4 [16] [16] [16] ;
long long int arr_5 [16] [16] ;
long long int arr_6 [16] [16] ;
long long int arr_9 [16] [16] [16] ;
long long int arr_13 [16] ;
long long int arr_14 [16] [16] [16] [16] [16] [16] ;
long long int arr_26 [23] [23] ;
long long int arr_27 [23] [23] ;
long long int arr_24 [16] [16] [16] [16] [16] [16] ;
long long int arr_25 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 671739732664147667LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 8655957151641239668LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 191861786615089968LL : -3450065208596970805LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2102235625005036893LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 8924006676329635600LL : -4031523015648918512LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 4409295435829721290LL : -8312676039422954502LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 4032566355675734178LL : 285709467999962069LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 502275337487486044LL : 3387525579573996191LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 6901842300061023201LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_26 [i_0] [i_1] = (i_0 % 2 == 0) ? -3958744106796569392LL : -5812545164155405516LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = (i_0 % 2 == 0) ? 6152735055176476469LL : 5205375288463755707LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 7587146289297710623LL : 1647159979173624683LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? -4079602209031699588LL : 6162272191891721126LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
