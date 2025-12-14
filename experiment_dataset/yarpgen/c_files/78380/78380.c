/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, 37));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [20] [i_1] [i_0] [i_0] [i_4] = var_10;
                                arr_16 [i_0] [17] [i_2] [i_1] [i_0] = 75;
                                var_20 = (min(var_20, (((((67107840 ^ (arr_5 [i_4] [i_2]))) >> (((max(var_2, (((arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3] [i_4]) ? 1671576155 : var_9)))) - 7887617390727586488)))))));
                            }
                        }
                    }
                }
                var_21 = ((7143783563903324472 ? 27 : 0));
                var_22 += -620291403;
                var_23 = (min(var_23, (arr_3 [i_0] [10])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_23 [18] [i_1] [18] [2] [i_0] [i_1] = (((!var_9) & var_16));

                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 20;i_7 += 1)
                            {
                                arr_28 [i_5] [i_5] &= var_15;
                                var_24 *= ((-(!-72)));
                            }
                            for (int i_8 = 1; i_8 < 20;i_8 += 1)
                            {
                                arr_31 [i_0 + 1] [i_5] [16] [i_6] [i_5] &= (min(var_2, (arr_26 [i_5] [2] [i_8] [i_8 + 1] [i_8])));
                                var_25 = (((((var_1 ? var_12 : var_5) & -27))));
                            }
                            arr_32 [i_0] [i_5] [i_1] [i_0] [i_0] = var_18;
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, var_11));
    #pragma endscop
}
