/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87939
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
    var_15 = (((~(-5074113939483324542LL))) & (((/* implicit */long long int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_13)) : (var_3))), (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0 - 1] [i_0]);
        var_16 += ((/* implicit */_Bool) ((((/* implicit */int) (!(var_8)))) - (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [10LL])) ? (((/* implicit */int) var_12)) : (arr_1 [i_0 - 2] [6LL])))) || (((/* implicit */_Bool) arr_1 [i_0] [16LL])))))));
    }
    for (int i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) min((var_9), (((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1]))))))));
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) (~(((unsigned long long int) 18151713352361202598ULL))));
                    var_18 ^= ((/* implicit */long long int) (signed char)-84);
                    var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) var_11)), (4924150898590940106ULL)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-50))))));
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) max((((short) var_1)), (arr_10 [i_1 - 2])));
        arr_12 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_9 [i_1 + 3] [i_1 + 2]), (arr_9 [i_1 + 2] [i_1 + 1])))) ? (((/* implicit */unsigned long long int) (+(min((65535LL), (((/* implicit */long long int) arr_10 [(signed char)14]))))))) : (min((((((/* implicit */_Bool) var_13)) ? (1117103813820416ULL) : (((/* implicit */unsigned long long int) arr_5 [(unsigned short)16] [i_1])))), (((/* implicit */unsigned long long int) (-(arr_3 [i_1]))))))));
    }
    var_21 = ((/* implicit */signed char) max((min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_14))))))), (var_6)));
}
