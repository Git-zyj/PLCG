/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, ((((arr_2 [i_1]) ? ((var_0 | (((arr_2 [i_0]) ? var_9 : (arr_0 [i_0 - 2] [i_2]))))) : var_8)))));

                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        var_16 = (((((-(arr_4 [i_0 + 1] [i_1])))) ? var_4 : -var_8));
                        var_17 = (var_14 ? ((-(arr_8 [i_0] [i_1] [i_1] [i_3 - 1]))) : ((((arr_4 [i_0 + 2] [i_0]) ? var_12 : ((~(arr_6 [i_1])))))));
                    }
                    var_18 += ((((!(arr_5 [i_0 - 2] [i_1] [i_2])))));
                }
            }
        }
    }
    var_19 *= (~var_11);
    var_20 = var_7;
    #pragma endscop
}
