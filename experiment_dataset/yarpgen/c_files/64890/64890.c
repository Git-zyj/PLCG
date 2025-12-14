/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(((var_0 ? var_11 : var_14)), var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = ((((((((var_3 | (arr_3 [i_1] [0] [i_1])))) ? (((!(arr_9 [i_0] [i_0] [i_2] [i_3] [i_4])))) : var_6))) % (min(-1, (min(1, var_3))))));
                                var_19 = arr_2 [i_4];
                            }
                        }
                    }
                }
                var_20 = (((((var_10 - (arr_10 [i_0] [i_0] [1] [i_0] [i_0] [i_0] [i_0])))) ? ((((arr_11 [i_0] [i_0]) ? var_1 : (((~(arr_10 [i_0] [0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : ((-((var_1 ? var_0 : (arr_9 [i_1] [i_0] [i_1] [17] [i_0])))))));
                var_21 = ((((((~(var_8 && var_15))) + 2147483647)) << ((-1 ? (!var_14) : (arr_11 [i_0] [i_1])))));
                var_22 = var_16;
                var_23 = (max((var_13 | var_2), var_15));
            }
        }
    }
    var_24 += ((1 ? var_8 : var_14));
    #pragma endscop
}
