/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_17 = 2964457899;
        arr_3 [5] = var_2;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 = -104;
        var_19 = (max(var_19, var_4));
        var_20 = 33932;
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        arr_10 [i_2] [i_2 + 1] = (max(((((9945626910473748730 + (arr_9 [3]))) - (((var_1 ? var_8 : -27078))))), (((21 ^ (arr_9 [i_2 + 1]))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_21 = (min(((((arr_6 [i_2 + 1]) != ((min(48, 126)))))), var_16));
                        var_22 = ((((((((arr_11 [i_2] [i_3] [i_5]) | -43))))) <= (min((((arr_8 [i_4 + 2]) + 2964457911)), (arr_13 [i_5] [i_3])))));
                        var_23 = var_0;
                    }
                }
            }
        }
        arr_17 [i_2] |= (min((((((arr_6 [i_2]) | var_2)))), ((((max(22289, var_4))) - -var_15))));
    }

    /* vectorizable */
    for (int i_6 = 2; i_6 < 9;i_6 += 1)
    {
        arr_21 [i_6] &= ((-(var_14 + 8296687890346726195)));
        var_24 = 1;
        var_25 = (max(var_25, ((((var_12 < var_8) ? var_4 : (arr_19 [i_6] [i_6]))))));
    }
    for (int i_7 = 2; i_7 < 7;i_7 += 1)
    {
        var_26 = ((((((((~(arr_16 [i_7 + 3] [i_7] [i_7 + 2])))) ? (1 ^ 1) : 72))) ? (9945626910473748749 ^ var_13) : 96));
        arr_25 [0] = (((arr_16 [i_7] [i_7 - 1] [i_7 + 3]) | (~67)));
    }
    var_27 = ((((min(var_12, var_9))) - var_5));
    var_28 = 1;
    var_29 |= ((+((var_4 ? (var_8 < var_0) : var_12))));
    #pragma endscop
}
