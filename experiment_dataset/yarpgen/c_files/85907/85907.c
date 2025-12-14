/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (max(1007264013, ((((arr_1 [i_0] [i_0]) >= (arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((var_13 / (max(12382460023696385510, 14))));
        var_18 = var_16;
        var_19 = (((var_8 + 2147483647) >> (((((arr_0 [i_1]) - (var_7 + var_11))) - 2589902967382521473))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((min((min((var_5 + var_16), 2750386058)), 1)))));

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_21 = (((arr_11 [8] [i_3] [i_2]) || ((((arr_8 [i_2]) + (arr_11 [i_2] [i_2] [i_2]))))));
            arr_13 [i_2] [i_2] = var_9;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_22 = var_5;
            var_23 = (var_15 ? var_8 : (arr_6 [i_2] [i_4]));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    {
                        var_24 = var_6;
                        arr_22 [14] [i_4] [i_5] [8] &= ((-15249 || (arr_20 [i_6 + 4])));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    arr_28 [18] [i_2] [i_8] [i_8] = 31;
                    var_25 ^= ((var_15 ^ 13) | (((var_17 ? (var_2 ^ var_15) : (((~(arr_19 [i_2] [8]))))))));
                    var_26 = var_10;
                }
            }
        }
        var_27 |= var_1;
    }
    var_28 -= ((var_7 / (var_7 < var_0)));
    #pragma endscop
}
