/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_1 ? (max(((var_8 ? var_12 : var_6)), ((min(var_8, 1879048192))))) : ((min((var_12 < var_8), 1593034200)))));
    var_17 ^= ((var_3 >> (((max(var_0, var_12)) - 40957577))));
    var_18 = ((min(var_7, 0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (max((min(((max((-32767 - 1), 1))), (max(1, (arr_2 [i_0]))))), (min(((-306783160 ? 1 : -31866)), (var_3 || var_13)))));
                var_20 = (~var_3);
            }
        }
    }

    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        arr_11 [i_2] = (((((~(var_7 >= var_8)))) >= (min(((max(var_2, 31865))), ((var_13 ? var_14 : (arr_3 [i_2])))))));
        arr_12 [i_2] [i_2] = (((arr_4 [i_2] [i_2] [i_2]) < (((arr_7 [i_2]) + var_2))));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        arr_21 [i_3] [i_4] [i_3] [i_3] = (max((max(var_10, var_13)), (min((arr_10 [i_3 + 3] [i_3 + 1]), (arr_10 [i_3 + 3] [i_3 + 1])))));
                        var_21 = (max(var_21, var_9));
                        var_22 -= (min(var_7, ((var_7 ? (max(-1800990491962007140, var_7)) : (((min(var_11, (arr_0 [i_2])))))))));
                    }
                }
            }
        }
        arr_22 [i_2] [i_2] = -29;
        var_23 = -1;
    }
    #pragma endscop
}
