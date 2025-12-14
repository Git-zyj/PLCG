/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = ((-19 ? (((((574576203 ? (arr_2 [i_0]) : (arr_3 [i_0])))) ? (~var_7) : (~2440650208))) : (arr_1 [i_0])));
        arr_5 [i_0] = ((574576216 ? (!32767) : -19));
        arr_6 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) ? (((((arr_1 [i_0]) || 0)) ? ((min((-32767 - 1), (arr_0 [i_0] [i_0])))) : (arr_1 [i_0]))) : 1615271805));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_15 = ((-14 >= (arr_8 [i_1])));
        arr_9 [i_1] [i_1] = (((-(arr_8 [1]))));
        arr_10 [i_1] = ((((var_4 ? 1743673491 : -32)) >= ((((arr_8 [i_1]) ? 62836 : var_10)))));
        var_16 = ((28620 ? 19 : var_9));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_17 = ((var_9 + (arr_7 [i_2])));
        var_18 = ((40 ? (arr_8 [i_2]) : ((var_2 ? -1871544575 : var_6))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_19 = -9;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_20 = ((36920 ? 540700348 : 9061299696336457430));
                    var_21 = 75;

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_22 = var_3;
                        var_23 = ((~(min(-1, ((~(arr_19 [10] [i_4] [i_4])))))));
                        arr_23 [i_4] = ((((230 ? 255 : 0)) >= ((((arr_14 [i_3]) >= (32759 + var_9))))));
                        arr_24 [i_3] [i_4] [0] [i_4] = (((arr_20 [i_4] [i_4]) >= (-32767 - 1)));
                        var_24 = (((((!(!-32751)))) >= var_12));
                    }

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        var_25 = (((arr_27 [i_4] [i_7 + 1] [i_7] [i_7] [i_7 - 1]) >= 220));
                        var_26 = (((arr_26 [i_7 + 1] [i_7] [i_7 - 1] [i_5]) ? (arr_26 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_3]) : var_8));
                        var_27 = (arr_16 [i_7 + 1] [i_7 + 1] [i_7 - 1]);
                        arr_29 [i_4] = ((~(arr_28 [i_7] [i_4] [i_4] [i_3])));
                    }
                    var_28 = (min(-444192774, (arr_27 [i_4] [i_5] [i_4] [i_4] [i_4])));
                }
            }
        }
    }
    var_29 = ((var_13 ? var_11 : ((-1407491469 ? ((var_3 ? -5904242598980236438 : var_3)) : (((var_11 ? var_1 : var_1)))))));
    #pragma endscop
}
