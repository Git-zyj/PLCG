/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((~var_12) + 2147483647)) >> ((((min(1, 1590538969))) ^ ((var_17 ? 1 : var_14))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] = (min(var_14, 1));
                    arr_11 [i_0] [i_0] = 1;
                }

                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_14 [i_0 - 1] [i_1] [i_3] = (((min(-5543527293598467321, 1)) % 229));
                    var_19 *= (((arr_3 [i_3] [i_0 + 2] [i_0 - 1]) && ((min(1, 1)))));
                    var_20 = ((-((((arr_8 [i_0 + 2]) >= (((arr_1 [i_1]) ? 1 : (arr_1 [20]))))))));
                }
                var_21 += ((-2 ? var_2 : (((((3859978246 ? (arr_3 [i_0] [i_0] [i_1]) : (arr_6 [8] [i_1])))) ? var_6 : ((var_13 ? var_7 : 1))))));
                var_22 = (min((max((-2001712517489554027 >= -2001712517489554022), 7579841064541997298)), ((((arr_8 [i_0 + 1]) + (arr_7 [i_1]))))));
            }
        }
    }
    var_23 = (max(var_23, ((min((((var_0 ? var_7 : ((max(var_5, var_13)))))), (((max(2001712517489554033, var_1)) + 73)))))));
    var_24 = (((((((1 ? 434989049 : var_1))) - ((var_12 ? 8 : var_9)))) | (min((((1 ? var_0 : var_1))), var_9))));
    #pragma endscop
}
