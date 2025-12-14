/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = ((((((arr_9 [i_0 - 1] [i_0 - 2] [i_0] [i_0]) ? var_3 : var_10))) ? ((var_7 ? (arr_2 [i_0 - 1]) : var_12)) : ((0 ? 32767 : 0))));
                    var_19 = (((((59999 ? 5534 : (arr_4 [i_0 - 1])))) ? (((262143 ? -925638038 : -1))) : ((-9 ? 34359738367 : 520192))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    var_20 = ((((((arr_15 [i_4 + 1] [i_4 - 1] [i_4] [i_4 + 2]) ? 6 : var_8))) ? (((4294705152 ? 5536 : var_10))) : ((2147483647 ? 5370206555068404838 : -1595793857))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_21 |= ((((((arr_14 [i_6] [i_4] [i_3 + 1]) ? var_11 : var_6))) ? ((2147483647 ? 262135 : (arr_14 [i_3] [i_3 + 1] [i_3]))) : (((39282 ? -36 : -565913466)))));
                                var_22 = (4 ? 1 : 0);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_23 = ((((var_8 ? (arr_12 [i_3 + 2]) : (arr_10 [i_3 + 1] [i_4 + 2])))) ? ((var_6 ? var_0 : (arr_25 [i_9] [i_9] [i_5] [i_5] [i_3 - 1] [i_3]))) : (((arr_23 [i_3 + 1] [i_4] [i_9] [i_8]) ? (arr_10 [i_4 - 1] [i_3 + 2]) : 48)));
                                var_24 = ((((((arr_17 [i_3] [i_3 - 1] [i_4 + 1]) ? var_16 : var_5))) ? (((254 ? -1443028241 : 1150727232))) : ((30720 ? var_15 : (arr_17 [i_3] [i_3 + 2] [i_4 + 1])))));
                            }
                        }
                    }
                    var_25 ^= (((((var_3 ? (arr_22 [2] [i_3 + 2]) : (arr_26 [i_3 + 1] [16])))) ? ((-1595793857 ? (arr_26 [i_3 + 1] [0]) : 1)) : (((-21 ? 9167 : 2)))));
                }
            }
        }
    }
    var_26 = var_12;
    #pragma endscop
}
