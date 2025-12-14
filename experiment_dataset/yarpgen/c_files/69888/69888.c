/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = ((~(min(66, 207111350))));
                    var_19 = (220 ? ((var_7 ? var_15 : var_3)) : (~var_6));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_20 = (((-1 == var_7) ? ((max((arr_1 [14]), (((0 == (arr_1 [17]))))))) : (var_10 == var_1)));
                                var_21 = -51;
                                var_22 += 2373613609588356699;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_23 = (arr_7 [16] [2] [1] [i_2] [5]);
                                arr_15 [3] [16] [i_2] [9] = (min((max((~var_2), (((~(arr_11 [13] [11] [14] [15] [4])))))), 1));
                                var_24 = ((((((arr_3 [i_0] [2] [1]) == (arr_3 [1] [1] [i_1])))) <= (!1)));
                                var_25 = var_12;
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = var_2;
    var_27 -= (min(var_1, (-var_13 <= var_2)));
    #pragma endscop
}
