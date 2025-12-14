/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_16 = (130 + 45);
                    arr_8 [i_2] [i_0] [i_1] [i_2] |= ((~(min((~var_0), var_3))));
                }
                for (int i_3 = 4; i_3 < 12;i_3 += 1)
                {
                    var_17 = (((-(arr_1 [i_0]))));
                    var_18 ^= 4107752450382919301;
                    var_19 = (arr_10 [i_3 + 3] [i_3] [i_0]);
                    arr_11 [i_1] [8] &= (arr_5 [i_0]);
                }
                var_20 = 347640262;
                var_21 ^= (arr_7 [i_0] [i_0] [2]);

                /* vectorizable */
                for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_1] = (((18602 | -1563064699) ? var_12 : (((213 ? 1900056277 : 43)))));
                    var_22 += (arr_1 [10]);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_23 = 1900056277;
                                arr_23 [i_0] [i_0] [i_1] [i_0] [i_0] [i_7] = ((~(arr_12 [i_0] [i_7])));
                            }
                        }
                    }
                    arr_24 [i_0] [i_0] [i_5] [i_5] = (arr_21 [i_0] [i_1] [i_1] [i_5]);
                    var_24 = var_6;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_25 = ((-(arr_3 [11] [i_10])));
                            arr_33 [i_0] [i_0] [6] [i_0] [i_10] [i_10] &= ((arr_13 [i_10]) + (arr_6 [i_0] [i_10] [i_8] [i_9]));
                        }
                        arr_34 [i_0] [i_0] [i_0] [8] [i_0] [i_9] = (~(80 <= 1152903912420802560));
                    }
                    arr_35 [i_0] [4] [14] |= var_10;
                }
            }
        }
    }
    var_26 += var_15;
    var_27 = (min(var_27, (((-109 - (((min(1900056277, 208)))))))));
    #pragma endscop
}
