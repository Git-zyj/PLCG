/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            var_20 ^= (((((((max(4835509325835016311, -124))) || -var_18))) > (max(-1, (13611234747874535310 > var_16)))));

            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                var_21 = 0;
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_22 = (max(((min(var_4, (max(var_8, var_3))))), (max((((var_8 > (arr_9 [i_4] [i_0] [i_1] [i_3])))), (3 / var_6)))));
                            var_23 *= (arr_9 [i_0] [16] [16] [i_4 + 1]);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_24 += 36315;
            var_25 -= 65531;
            arr_18 [i_0] [i_0] = -255;
            arr_19 [i_0 + 1] [i_0] = 65532;
        }
        var_26 ^= ((var_1 <= ((((arr_13 [i_0 + 1] [4]) > var_11)))));
        var_27 = (min(var_27, (((~(arr_2 [i_0 - 1]))))));
    }

    for (int i_6 = 1; i_6 < 22;i_6 += 1)
    {
        arr_22 [i_6] [i_6 - 1] = (((((~1) ? (94 ^ 13611234747874535284) : 2668876627))) ? (((((1 | (arr_2 [i_6])))) ? var_6 : (max((arr_17 [i_6] [i_6 + 1] [i_6]), var_6)))) : var_14);
        var_28 = (min(var_28, (((max((arr_11 [i_6 + 1] [i_6 + 1] [6] [i_6 - 1]), (min(-32648, 65531))))))));
        arr_23 [i_6] = (max(((-(arr_11 [i_6] [12] [12] [i_6]))), var_8));
    }
    #pragma endscop
}
