/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 46906;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 4; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_1] [i_1] [i_2] [i_2] [i_2] = (arr_7 [i_1 - 1] [i_0 + 1]);
                            var_19 = 27451;
                            arr_13 [i_1] [i_1] [i_2] [i_1] [i_0 - 1] = (arr_5 [i_0] [i_1 + 2] [i_1]);
                            var_20 -= (arr_4 [i_4]);
                            arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (arr_6 [i_0 + 1] [i_1 + 2] [i_4 + 4]);
                        }
                        for (int i_5 = 4; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_21 = 576460752303423487;
                            var_22 = 2526135796349575636;
                        }
                        /* vectorizable */
                        for (int i_6 = 4; i_6 < 18;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_0] [12] [i_2] [20] [i_1] [i_6] = (!18446744073709551614);
                            var_23 |= (arr_9 [i_0] [6] [i_6] [i_0 + 1]);
                        }
                        arr_23 [i_0] [16] |= ((~(((!(arr_16 [i_0] [i_0 - 1] [i_2] [i_1 + 3] [i_0]))))));
                    }
                }
            }
        }
        var_24 ^= 27451;
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                {
                    var_25 &= (arr_20 [i_0] [i_0 + 1] [10] [i_0] [i_7] [i_7 - 1]);
                    arr_28 [6] [4] [i_8] &= 0;
                }
            }
        }
        var_26 = (arr_17 [i_0] [18] [4] [i_0] [i_0]);
    }
    var_27 = (~22);
    #pragma endscop
}
