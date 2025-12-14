/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    var_19 = (max(((1431504099 ? (arr_7 [1] [i_0 - 2]) : (arr_2 [i_0] [i_0 - 2]))), ((var_15 ? 1953532816 : 2341434479))));

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        arr_10 [0] [5] [0] = 1953532812;
                        var_20 = (min(var_20, var_6));
                        arr_11 [i_1] [i_2 - 1] [i_3 + 1] = 811674485;
                        arr_12 [i_0 - 1] [1] [i_0 - 2] = (min(((var_12 + ((811674485 ? var_10 : (arr_4 [i_0 + 2] [i_0 + 2]))))), ((-2341434484 ? 3932160 : 1953532816))));
                    }
                    var_21 = (!-24212);
                    arr_13 [0] = ((+((-7551836969332557785 ? (arr_1 [i_1 + 2]) : 56628))));
                }

                for (int i_4 = 4; i_4 < 9;i_4 += 1) /* same iter space */
                {
                    arr_16 [4] [i_1 - 1] = 29358;
                    var_22 = 13141;
                    arr_17 [i_0 - 1] = (min((((~14) <= var_4)), ((((7156564710409474725 ? 3789457719 : 18446744073709551605)) > -16073))));
                }
                for (int i_5 = 4; i_5 < 9;i_5 += 1) /* same iter space */
                {
                    arr_20 [7] [i_0 + 1] = ((~(((var_3 < (((min(var_1, 16073)))))))));
                    var_23 ^= (3483292811 < 3550231254);
                }
            }
        }
    }
    var_24 = (min(((((!3456049460) ? 8907 : ((min(var_6, 126)))))), (((18446744073709551598 ? 156037424 : -1)))));
    #pragma endscop
}
