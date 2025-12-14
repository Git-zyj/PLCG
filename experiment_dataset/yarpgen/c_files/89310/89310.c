/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [22] [i_1] [i_0] [i_0] [i_1] = ((max(((7 & (arr_6 [i_0 - 2] [i_1]))), 127)) < (((max(var_4, -5)) - (!-15))));
                                var_18 -= ((-49 >> (((max(130944, 7)) - 130938))));
                                var_19 *= (arr_1 [i_0 - 1] [i_0 - 1]);
                            }
                        }
                    }
                }
                var_20 = (max(((3019636425651665585 ^ (max(var_11, var_7)))), ((max((arr_11 [i_0] [1] [18] [i_1] [i_1]), (arr_11 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_21 = (((((var_13 && var_6) ? ((max((arr_10 [i_5] [i_6] [9] [i_8] [i_8]), var_14))) : (var_7 / var_1))) % (max(58, (max(130944, -1))))));
                                var_22 = (-(~10931));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        {
                            var_23 = (((arr_16 [i_5] [i_5]) > 54604));
                            arr_33 [i_5] = (((!var_11) - ((max(var_4, (arr_31 [i_11] [i_5] [i_10] [i_10] [i_5] [i_5]))))));
                            var_24 *= ((var_2 >> (((max((max(0, var_15)), (max(65523, 15427107648057886030)))) - 15427107648057886020))));
                            arr_34 [i_5] [i_5] [i_5] = (max((-25 != var_0), ((var_15 ? 65523 : (arr_27 [i_5] [i_5])))));
                        }
                    }
                }
                var_25 = (max(3945690782, 79));
            }
        }
    }
    var_26 = ((var_12 << ((((-(min(-2083932863, 567453553048682496)))) - 17879290520660869105))));
    var_27 = -var_0;
    var_28 = (((12 - -7) ? var_1 : (4032 && 63)));
    #pragma endscop
}
