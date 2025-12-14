/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(((-((min(var_8, var_4))))), ((max(var_5, var_2)))));
    var_18 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = (0 - 65531);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_20 = ((~((~(arr_6 [i_1] [i_1] [i_1] [i_3])))));
                            arr_8 [i_1] [i_1] [i_2] [i_3] = ((32533 ? ((max(var_8, var_8))) : (((((19 ? (arr_4 [1] [i_1] [i_1]) : 65524))) ? ((1 ? 1 : 2168)) : 14336))));
                            arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] = ((9 ? 65527 : 0));
                        }
                    }
                }
                var_21 = ((55076 ? var_13 : var_10));
                arr_10 [10] [i_1] = (~var_8);
            }
        }
    }
    #pragma endscop
}
