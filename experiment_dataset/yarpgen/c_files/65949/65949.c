/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((0 ? (((18446744073709551615 == -1776668720) / ((-109 ? -1258088350 : var_10)))) : (min((var_1 * var_6), (-32740 & 1)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [1] [i_2] [i_1] = (((((!(arr_11 [i_0] [i_0] [i_0])) ? -1746133757 : var_5))));
                        arr_13 [i_3] [i_2] [i_3] [i_3] &= var_1;
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_17 [i_1] [i_1] [i_2] = (((((+(((arr_9 [i_1] [i_1]) ? (arr_3 [2]) : var_9))))) ? -var_2 : var_4));
                        var_15 = (arr_0 [i_2] [3]);
                        var_16 ^= (((((46702 / (max((arr_0 [i_1] [i_2]), var_1))))) ? (min(1, (max(10586766337653063966, var_9)))) : ((((!var_10) ? (32740 && var_12) : (!var_11))))));
                    }
                    var_17 = (min(var_17, ((((((-var_1 ? 30483070 : (arr_2 [i_0])))) ? (((-((var_7 ? var_10 : var_1))))) : (arr_1 [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
