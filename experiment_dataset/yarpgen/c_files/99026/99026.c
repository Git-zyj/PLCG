/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((~(((var_10 != (var_3 > var_6)))))))));
    var_19 -= var_11;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                var_20 = ((((((((((arr_4 [i_0]) << (var_9 + 5480828888085904001)))) <= (var_3 ^ var_9))))) ^ -var_8));
                arr_9 [i_0] [i_0] [i_0] [13] = var_0;
            }
            var_21 ^= var_4;
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        arr_19 [18] [i_5] [i_5] [i_0] = ((~(!100)));
                        arr_20 [i_0] [i_3] [i_4] [i_0] [i_5] = -var_7;
                    }
                }
            }
        }
        arr_21 [i_0 - 3] = ((!(arr_12 [i_0 - 1])));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            {
                arr_28 [i_6] [i_6] = ((!(((~(arr_26 [i_6] [i_6] [i_6]))))));
                var_22 ^= (arr_22 [i_7]);
                var_23 = (((!(arr_25 [1] [i_7] [i_7]))));
            }
        }
    }
    var_24 = (~7450945085392931168);
    #pragma endscop
}
