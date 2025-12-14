/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81814
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) (((~(arr_1 [i_0 - 1] [i_0 + 2]))) < (var_6)));
        arr_3 [i_0] [i_0] = arr_1 [i_0 + 2] [i_0 + 2];
        var_21 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((1429560249039049684ULL), (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_15)))), (max((var_11), (((/* implicit */unsigned long long int) (short)-1))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_22 -= ((/* implicit */unsigned int) ((max((max((17274702944348673775ULL), (((/* implicit */unsigned long long int) 4294967295U)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-45)) | (((/* implicit */int) arr_5 [22LL]))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -4212928320819897180LL)) ? (((/* implicit */unsigned long long int) 4294967289U)) : (18446744073709551615ULL))), (((/* implicit */unsigned long long int) max((4212928320819897180LL), (4212928320819897180LL))))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17ULL))))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) 6158354945525100141LL);
    }
    var_23 = ((/* implicit */unsigned long long int) 765011396U);
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((((/* implicit */_Bool) arr_14 [i_4] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_3]))) : (var_17))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10437)))))));
                    var_25 *= ((/* implicit */long long int) arr_11 [i_4]);
                    var_26 = ((/* implicit */long long int) (+((~(((/* implicit */int) var_9))))));
                }
            } 
        } 
    } 
}
