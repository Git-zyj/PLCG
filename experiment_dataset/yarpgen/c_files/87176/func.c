/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87176
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) ((arr_1 [i_0 + 2]) <= (arr_1 [i_0 + 3])));
        var_17 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) - (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) <= (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (short)23723);
    }
    /* vectorizable */
    for (short i_1 = 3; i_1 < 15; i_1 += 4) 
    {
        arr_5 [i_1] = ((unsigned char) arr_3 [i_1]);
        /* LoopNest 3 */
        for (unsigned int i_2 = 3; i_2 < 12; i_2 += 4) 
        {
            for (unsigned char i_3 = 2; i_3 < 13; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1 - 3] [i_1])) | (((/* implicit */int) (short)-21965))));
                        var_19 = var_2;
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)23717))) : (arr_9 [i_2 + 3] [i_2 + 3] [i_2 + 2] [i_2 - 2])));
                        arr_15 [i_1] [i_2] [(unsigned char)13] [i_1] = ((/* implicit */short) ((unsigned char) var_13));
                    }
                } 
            } 
        } 
        arr_16 [i_1] = var_9;
        var_20 += ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
    }
    for (signed char i_5 = 2; i_5 < 18; i_5 += 3) 
    {
        arr_20 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)23713))))) ? (((/* implicit */int) (unsigned char)65)) : (((((/* implicit */_Bool) min((var_15), (((/* implicit */int) arr_17 [i_5]))))) ? (((((/* implicit */int) var_10)) << (((/* implicit */int) (unsigned char)2)))) : (((/* implicit */int) arr_18 [i_5 - 2]))))));
        arr_21 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((short)-23736), (((/* implicit */short) arr_17 [i_5 + 1]))))) ? ((+(((/* implicit */int) var_1)))) : (((((/* implicit */int) ((((/* implicit */int) arr_18 [i_5])) > (((/* implicit */int) arr_17 [i_5]))))) << (((((/* implicit */int) arr_17 [i_5 - 1])) - (40)))))));
    }
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)11792))))) ? (((((/* implicit */_Bool) var_14)) ? (var_3) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (var_15) : (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_13)))))));
}
