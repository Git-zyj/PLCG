/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8044
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_0]))));
        var_17 = ((/* implicit */unsigned char) arr_1 [15ULL]);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (signed char i_1 = 3; i_1 < 12; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (-((~(arr_3 [i_1 - 1]))))))));
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))));
    }
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_7 [i_2]))))));
        arr_11 [2U] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(max((((/* implicit */int) arr_5 [(unsigned short)1])), (arr_8 [i_2])))))), ((+(min((((/* implicit */unsigned long long int) arr_0 [i_2])), (arr_7 [i_2])))))));
    }
    for (unsigned int i_3 = 4; i_3 < 15; i_3 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) (-(arr_13 [i_3] [i_3 - 4])));
        arr_14 [i_3] &= ((/* implicit */signed char) arr_0 [i_3 - 1]);
        arr_15 [i_3 + 1] = ((/* implicit */int) arr_12 [i_3] [10]);
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            arr_19 [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_0 [i_3 - 2])), (min((((/* implicit */unsigned long long int) arr_17 [i_3 - 3] [i_3])), (min((arr_13 [i_4] [i_4]), (((/* implicit */unsigned long long int) arr_16 [i_4] [i_3 - 3]))))))));
            var_21 *= ((/* implicit */unsigned char) (-(646921889)));
            /* LoopNest 2 */
            for (unsigned char i_5 = 2; i_5 < 15; i_5 += 2) 
            {
                for (int i_6 = 1; i_6 < 12; i_6 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_20 [i_5 - 1] [i_3 - 2] [i_3 - 1] [i_3 - 3]))))));
                        var_23 |= ((/* implicit */_Bool) arr_20 [i_3] [i_4] [0] [i_6]);
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 3; i_7 < 14; i_7 += 4) 
        {
            arr_27 [i_3] [i_7] [i_3] = (-((-(((/* implicit */int) arr_16 [i_3 - 3] [i_3 - 3])))));
            var_24 = ((/* implicit */_Bool) arr_18 [i_3] [i_7] [i_7]);
        }
        for (int i_8 = 2; i_8 < 15; i_8 += 2) 
        {
            var_25 *= ((/* implicit */unsigned long long int) arr_22 [i_3] [i_3] [i_3]);
            var_26 += (+(((/* implicit */int) max((arr_17 [i_8 + 1] [i_3 - 1]), (((/* implicit */signed char) arr_1 [i_8]))))));
        }
    }
    var_27 = var_7;
    var_28 = var_4;
    var_29 = ((/* implicit */unsigned short) var_6);
}
