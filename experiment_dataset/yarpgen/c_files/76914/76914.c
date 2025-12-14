/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_14 = (max((max((~var_12), (max(1, (arr_7 [i_0] [i_1] [i_2] [3]))))), ((-16846537361222293061 ? -1 : (arr_7 [i_0] [i_1] [i_2] [i_3])))));
                                arr_13 [11] [i_1] [i_2] [i_1] [i_4] = ((((((arr_0 [i_0] [i_0]) * ((var_0 / (arr_2 [i_0])))))) * (max(var_11, 11459529702013459528))));
                                arr_14 [i_4] [i_3] [4] [0] [0] [i_0] = (arr_5 [i_4] [i_1] [i_2] [i_2]);
                            }
                        }
                    }
                }
                var_15 = (((-53 > 6) % (((((-38 ^ 18064) + 2147483647)) << (663790358 - 663790358)))));
            }
        }
    }
    var_16 = min((((1 < 65535) ? (min(var_10, 0)) : ((1 ? var_10 : var_11)))), (((360623915 ? var_10 : var_7))));
    var_17 = ((38 >> (((max(var_2, var_12)) - 1001480585622395846))));
    var_18 = (max(var_18, var_3));
    #pragma endscop
}
