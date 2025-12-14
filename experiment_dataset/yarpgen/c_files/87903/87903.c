/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= ((var_9 ? (!var_14) : var_14));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= (arr_1 [i_0]);
        var_17 *= (!-655062791);
    }
    for (int i_1 = 2; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((var_5 || (52794 >= -11349)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_18 &= ((((((-1578780313 + 255) + (((arr_9 [i_5]) - -1030422273))))) || var_3));
                                arr_15 [i_1] [i_2] [i_2] [i_5] [i_2] [i_2] &= (((((((arr_8 [i_1]) && 9173336875275618680))) >= 1)));
                                var_19 = (((!var_3) ? -72 : (-2147483647 - 1)));
                            }
                        }
                    }
                    arr_16 [i_2] [2] [i_2] = ((-((var_11 ? (arr_4 [9]) : 77))));
                    var_20 = (~var_3);
                    var_21 -= (arr_11 [i_1] [i_2] [i_1] [i_1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
