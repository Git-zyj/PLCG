/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [7] [i_2] = (min((arr_1 [i_0]), var_0));
                    var_11 = arr_5 [i_0] [i_1] [11];
                }
            }
        }
        var_12 = ((((((arr_2 [i_0]) ? var_2 : 42716))) ? (((!(~var_5)))) : ((min(var_1, (arr_4 [i_0] [i_0] [i_0]))))));
        var_13 = (((((arr_3 [i_0]) ? var_0 : 8152942104793888451))));
        var_14 &= ((!(((35 >> (42 - 39))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_14 [i_0] [i_3] [i_4] [i_4] = (((min(1, (arr_3 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_19 [i_5] [i_5] = (((~var_10) ? (((arr_18 [9]) ? var_8 : var_2)) : 24167));
                                var_15 = 1;
                            }
                        }
                    }
                    var_16 = ((~((1 ? 5635360439608605211 : -36))));
                }
            }
        }
    }
    for (int i_7 = 1; i_7 < 7;i_7 += 1)
    {
        var_17 = (min(var_17, ((max(41382, (max(((min(var_2, var_6))), var_10)))))));
        arr_23 [i_7] [i_7] = 0;
        var_18 = ((var_10 ? 1 : var_5));
        var_19 ^= ((+(((arr_4 [i_7 + 3] [i_7] [i_7 + 2]) ? 55335808 : 1))));
    }
    var_20 = ((5635360439608605215 >= ((var_10 ? (((min(var_3, var_3)))) : ((var_0 ? var_7 : 1))))));
    #pragma endscop
}
