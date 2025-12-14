/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95447
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_13 += ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) (short)30);
    }
    for (short i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 3; i_2 < 15; i_2 += 2) 
        {
            arr_8 [i_1] [i_1] = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
            arr_9 [(unsigned char)13] [i_2] [i_1 - 1] = 7354775178087436599ULL;
            /* LoopSeq 1 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                arr_13 [i_2] [i_2 - 1] [i_3] = ((/* implicit */unsigned long long int) 56865018);
                var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_1 - 1] [i_2] [i_3] [i_2])) < (((/* implicit */int) arr_11 [i_1 + 3] [i_2] [i_3] [i_2]))));
                var_15 = ((/* implicit */unsigned char) ((signed char) (short)-29854));
                var_16 = ((/* implicit */short) ((unsigned long long int) 2301339409586323456LL));
            }
        }
        var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)29861)), (arr_7 [i_1 + 3] [(signed char)7]))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_14 [i_4] [i_4])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) < (arr_15 [i_4] [i_4]))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [i_4])))))))));
        var_19 *= ((/* implicit */unsigned short) arr_14 [i_4] [i_4]);
        arr_16 [i_4] = ((/* implicit */short) (-(max((arr_15 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_14 [i_4] [i_4]))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) 18030489714381475710ULL))));
    }
    var_21 = ((/* implicit */int) var_5);
    var_22 = ((/* implicit */long long int) var_12);
}
