/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80946
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
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
        var_18 = ((/* implicit */long long int) (-(var_9)));
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_19 = ((/* implicit */signed char) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) max((((/* implicit */short) var_11)), (var_6)))) ? (((((/* implicit */int) var_13)) << (((arr_6 [i_1]) - (4569501791727813553ULL))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-84))))))));
        arr_8 [(short)1] = ((/* implicit */short) (+((+(((/* implicit */int) arr_0 [i_1]))))));
        arr_9 [i_1] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((var_14) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_10))))), (((long long int) (signed char)-84))));
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_20 = ((/* implicit */signed char) max((min((6207047684600740842ULL), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_10)), (((var_12) + (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
        arr_12 [i_2] = ((/* implicit */_Bool) (-(max((arr_7 [i_2]), (var_8)))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? ((~(arr_6 [i_2]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13)))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_3])))))));
            arr_15 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) var_10))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            arr_19 [i_4] = ((/* implicit */signed char) ((arr_6 [i_2]) < (((/* implicit */unsigned long long int) ((long long int) arr_3 [i_4])))));
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                var_23 = ((/* implicit */long long int) (+(((/* implicit */int) var_16))));
                var_24 = ((/* implicit */signed char) var_6);
            }
            for (short i_6 = 3; i_6 < 9; i_6 += 3) 
            {
                var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_14 [i_6 - 1] [i_6]))));
                arr_25 [i_2] [(short)3] [i_4] [i_2] = arr_14 [i_6 + 1] [i_6];
            }
        }
    }
    var_26 = ((/* implicit */unsigned int) var_4);
}
