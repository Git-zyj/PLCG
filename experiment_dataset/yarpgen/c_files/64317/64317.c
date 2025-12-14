/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((~(arr_3 [i_0] [i_0] [i_1]))))));
                arr_5 [i_0] [i_1] &= ((-((((arr_2 [i_0]) || (arr_2 [i_0]))))));
                var_19 *= ((131135305 ? (((31 + ((-(arr_0 [i_1])))))) : var_3));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_13 [i_3] [i_2] [i_1] [i_1] [i_0] = ((((((((arr_6 [i_0] [i_3]) ? -5045128472068824906 : 1920566679)) | ((max(65535, 2374400617)))))) ? (((((max((arr_12 [i_0]), 1))) ? 65535 : (arr_2 [i_1])))) : (max((arr_11 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1]), 4163831995))));
                            var_20 -= 0;
                        }
                    }
                }
            }
        }
    }
    var_21 |= var_14;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                arr_19 [i_5] [i_5] = ((~var_7) ? (1 / 5667) : -2374400638);
                arr_20 [i_4] [i_5] = ((((255 ? 4163831991 : var_11))) ^ (arr_14 [i_4]));
                var_22 = ((65535 ? ((var_15 ? (((var_15 ? (arr_16 [i_5] [i_5] [i_4]) : var_9))) : 2995987744891243825)) : ((((((131135305 ? var_4 : var_16))) ? (arr_14 [i_5]) : (arr_18 [i_4] [i_4]))))));
            }
        }
    }
    var_23 -= (28362 || var_12);
    #pragma endscop
}
