/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = ((var_8 + 9223372036854775807) << (((((min(31589, 140)))) - 140)));
                arr_8 [i_0] [i_1] = ((((min((arr_3 [i_0] [i_0]), -27))) ? (arr_0 [i_1]) : (33947 - 33939)));
                arr_9 [i_1] = var_10;
                arr_10 [i_0] = ((~((~(arr_2 [i_0])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_13 [i_2] = ((-((~(((arr_3 [i_2] [i_2]) ? (arr_2 [i_2]) : (arr_3 [i_2] [i_2])))))));
        arr_14 [0] [i_2] = (+-255);
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_21 [i_2] [i_3] [i_3] = ((var_14 ? (arr_12 [i_4]) : (((((332873581 ^ (arr_16 [i_2] [i_2])))) | ((-1215957783 ? 33946 : 231945379))))));
                    arr_22 [i_2] [i_3] [i_3] [i_2] = (arr_19 [i_3] [i_3]);
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 18;i_5 += 1)
    {
        arr_26 [i_5] [1] = (min((7039048468049322863 != 1215957783), (arr_1 [4] [8])));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 17;i_8 += 1)
                {
                    {
                        arr_33 [i_6] [7] [12] [i_6] = ((max(((max((arr_28 [i_7] [i_7 + 2]), 120))), (min((arr_2 [i_6]), var_6)))));
                        arr_34 [18] [i_6] [12] [2] [i_6] = (((((-(((arr_5 [i_5 + 2]) % 17331))))) ? ((((!(arr_32 [i_8 + 1] [i_8 + 1] [i_8] [i_8]))))) : (((var_8 / -5327625808910888011) ? var_17 : (((140 ? 1215957783 : 33955)))))));
                    }
                }
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
