/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92894
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_4] = ((/* implicit */short) (((~(min((((/* implicit */unsigned int) (short)-28912)), (arr_2 [i_0]))))) < ((~(((((/* implicit */_Bool) var_6)) ? (arr_13 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_3 + 1] [i_2] [i_1] [i_0])))))))));
                                var_14 &= ((/* implicit */short) (+(((((/* implicit */_Bool) arr_13 [i_0 - 2] [i_3 - 3] [i_2] [i_4 + 2])) ? (min((4294967295U), (0U))) : (((((/* implicit */_Bool) arr_6 [i_3] [i_4 - 1] [i_3])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 + 2] [i_2] [i_0] [i_0])))))))));
                                var_15 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) ((unsigned int) 4294967294U))) ? ((~(arr_5 [i_2]))) : (((((/* implicit */_Bool) var_12)) ? (var_4) : (arr_4 [i_2] [i_4 + 2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (arr_6 [i_0] [i_1] [i_2])))))))));
                                var_16 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (+(arr_2 [i_3]))))))));
                                var_17 = (((-(0U))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 1] [i_2] [i_3] [i_4]))) : (579103764U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((0U) >= (579103764U))))) : (((arr_3 [i_0]) >> (((arr_8 [i_0] [i_0] [i_0]) - (616465721U))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [(short)11] [i_2] = (~(max((((/* implicit */unsigned int) arr_12 [i_0] [i_0 + 1] [i_0] [i_0 + 2] [i_0 - 1])), (arr_7 [i_0 - 1] [i_1] [i_0 - 1] [i_2]))));
                    var_18 = ((/* implicit */short) 3715863531U);
                }
            } 
        } 
    } 
    var_19 = max((var_1), (var_11));
    /* LoopNest 2 */
    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 3) 
    {
        for (unsigned int i_6 = 3; i_6 < 11; i_6 += 1) 
        {
            {
                var_20 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24654)) ? (4294967295U) : (3253158380U))))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            arr_28 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */short) arr_20 [i_7]);
                            var_21 = ((((/* implicit */_Bool) min((arr_16 [i_6 - 3]), (arr_16 [i_6 - 1])))) ? (((unsigned int) arr_16 [i_6 + 1])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_6 + 2])) > (((/* implicit */int) (short)18576)))))));
                            var_22 = ((/* implicit */short) ((15U) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5]))) >= (((((/* implicit */unsigned int) ((/* implicit */int) (short)0))) / (1041808931U)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    for (short i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            {
                                arr_37 [i_11] [i_6] [i_5] = ((/* implicit */short) 3944752792U);
                                arr_38 [i_5] [i_9] [i_10] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5] [i_6] [i_6] [i_11]))) : (arr_18 [i_5] [i_6])))))) ? ((~(arr_23 [i_5 + 1] [i_5 - 1]))) : ((+(548163686U)))));
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_35 [i_5] [i_6 - 2] [i_9] [i_10] [i_11]), (((/* implicit */unsigned int) min((arr_26 [i_5 - 1]), ((short)-31793))))))) ? ((~(((/* implicit */int) (short)15641)))) : (((((/* implicit */int) (short)-26943)) % (((/* implicit */int) arr_26 [i_6 - 2]))))));
                                var_24 = ((/* implicit */short) ((((((((((/* implicit */int) var_10)) + (2147483647))) << (((var_4) - (3388369900U))))) >= (((/* implicit */int) max((var_2), (arr_22 [i_5 - 1] [i_6] [i_6] [i_10])))))) ? (((/* implicit */int) arr_16 [i_5 + 1])) : ((-(((/* implicit */int) arr_16 [i_5 - 1]))))));
                                var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1158243806U)))))) + ((~(4294967295U))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
