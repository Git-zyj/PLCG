/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((var_7 ? (arr_1 [i_0]) : ((18446181123756130304 - (arr_1 [i_0])))));
        var_18 = var_3;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_9 [i_3] [i_1] [i_1] [i_0] [i_2] = (+(((arr_7 [i_0] [i_2] [i_2 - 2] [i_3] [i_2 - 2]) ? (arr_7 [i_0] [i_1] [i_2 + 2] [i_1] [i_3]) : (arr_7 [i_0] [i_0] [i_2 + 3] [i_3] [i_2]))));
                        arr_10 [i_3] [i_0] [i_3] [i_2] [i_0] [i_0] = var_10;
                        var_19 -= (((562949953421312 % 1658840264) ? (((!(arr_8 [i_2] [i_3] [i_2 - 1])))) : -1696757471));
                        arr_11 [i_2] [i_0] [18] [i_2] = ((((((arr_4 [i_2 - 2] [i_0]) ? (arr_4 [i_2 + 1] [i_1]) : (arr_4 [i_2 + 2] [i_0])))) ? (max(-4967241184724340891, (((-(arr_1 [9])))))) : (((-(arr_6 [i_2 - 1] [i_2 + 1] [i_2 - 1]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_14 [i_4] = (arr_12 [i_4]);
        var_20 -= (((arr_4 [i_4] [i_4]) ? (-115 != -1) : (arr_0 [i_4])));
    }
    var_21 = var_12;
    var_22 ^= (((((!2636127031) << (((min(var_14, var_8)) - 9682)))) <= var_0));
    #pragma endscop
}
