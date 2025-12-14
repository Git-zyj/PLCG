/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = (max(((((max((arr_15 [20] [i_1] [i_2] [i_2] [i_4]), var_10))) ? (-2147483647 - 1) : ((var_2 ? var_18 : (arr_10 [i_0] [i_2]))))), ((max((((!(arr_13 [i_2] [i_2] [i_3] [i_3])))), 49152)))));
                                var_21 = (((~var_5) ? (arr_8 [i_2]) : (((!(arr_8 [i_2]))))));
                            }
                        }
                    }
                    var_22 &= ((24 ? ((((var_14 ? (arr_15 [i_0] [i_1] [i_2 + 1] [i_1] [i_2]) : var_9)) + (arr_12 [i_0] [i_0] [i_1]))) : ((max(var_18, ((var_13 ? -24 : var_1)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 8;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            {
                var_23 = ((((((((-4832939334714046210 ? 5036480518821213464 : (arr_13 [i_5] [i_5 + 1] [i_5] [i_5])))) ? (arr_8 [i_5]) : var_14))) ? (max(((max((arr_11 [i_5] [i_5] [i_6]), (arr_15 [i_5] [5] [i_5 - 2] [i_5] [i_5])))), ((var_12 ? (arr_17 [i_5]) : 0)))) : var_6));
                var_24 = (min(var_24, (arr_3 [i_5])));
                var_25 = (((arr_7 [i_5 + 2] [i_6] [i_6]) ? (var_7 == var_13) : ((var_3 ? var_9 : 106))));
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 7;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        {
                            arr_26 [i_5] [i_5] [i_5] [i_5] = var_0;
                            var_26 = (min(var_26, var_0));
                            var_27 = (((arr_14 [i_5 - 2] [i_5 + 1] [i_7 - 2] [i_7 + 1] [i_5]) ? -var_15 : var_5));
                        }
                    }
                }
            }
        }
    }
    var_28 ^= max(((~((var_15 ? 5036480518821213486 : 46)))), var_18);
    var_29 *= ((~(((-121201184761960162 ? var_8 : 57647)))));
    #pragma endscop
}
