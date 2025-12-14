/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= 82;
    var_14 *= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_15 |= (arr_6 [i_1] [i_0]);

                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        var_16 *= ((var_8 % ((var_8 ? (((max(var_4, (arr_5 [i_0] [i_0] [i_0] [i_0]))))) : var_0))));
                        var_17 = (min(var_17, var_1));
                        var_18 = (max((((!(arr_8 [i_3] [i_3] [i_3] [i_3 - 1] [i_3])))), (((1887935654 ^ 79) | (((((arr_5 [i_0] [i_1] [i_1] [i_3 + 1]) > (arr_5 [i_0] [i_1] [i_1] [i_1])))))))));
                        arr_10 [i_0] [i_0] [i_0] [i_0] &= (arr_5 [i_0] [i_0] [i_0] [i_0]);
                    }
                    arr_11 [i_1] = var_9;
                }
            }
        }
    }
    var_19 = var_2;
    var_20 = (min(var_20, 82));
    #pragma endscop
}
