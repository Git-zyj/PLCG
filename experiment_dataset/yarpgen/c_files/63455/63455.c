/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = var_0;
                    var_21 = (~var_17);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    arr_15 [i_3] [i_4] [1] = (max((((!(arr_10 [i_3])))), (max(42, var_12))));
                    var_22 = var_16;
                    arr_16 [i_4] [i_4] [11] [2] &= (max(-var_12, var_11));
                }
            }
        }
    }
    var_23 = (((max(var_3, (min(226, 226))))));
    var_24 = -22;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            {
                arr_21 [i_6] = ((~(~-17334)));
                var_25 += ((((((17339 ? -17340 : 19244)) + 2147483647)) >> ((((((var_11 ? 97 : var_9))) && ((max(var_9, -57))))))));
                var_26 = (max(var_26, 11573423764857087525));
                arr_22 [i_6] [i_6] = (arr_17 [i_7]);
            }
        }
    }
    #pragma endscop
}
