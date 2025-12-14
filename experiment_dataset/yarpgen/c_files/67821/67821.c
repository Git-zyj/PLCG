/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_19 = (max(var_19, (39516 ^ var_7)));
        var_20 = (min(var_20, (((((var_16 ? var_17 : var_17)) + (arr_3 [8] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = (max(var_21, ((max(((var_13 % ((var_14 ? 3028915284000527082 : 9223372036854775807)))), (arr_4 [i_1]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_22 |= var_0;
                    var_23 += var_15;
                    var_24 *= ((-(((9516493261119694192 && 253) * 34359721984))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        var_25 = (min(var_25, ((((arr_16 [i_7]) ^ -1)))));
                        var_26 += (((((53824 > (arr_13 [22])))) << (var_4 - 31675)));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_8 = 3; i_8 < 24;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 24;i_10 += 1)
                {
                    {
                        var_27 += ((var_9 ? 53819 : var_1));
                        var_28 = (max(var_28, ((((arr_15 [i_4] [17] [i_9]) ? var_17 : 4294967295)))));
                    }
                }
            }
        }
    }
    var_29 *= (4820 & var_14);
    #pragma endscop
}
