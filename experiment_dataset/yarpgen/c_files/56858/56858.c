/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = -var_8;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 = arr_1 [0] [i_0];
        arr_2 [i_0] [0] = (arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((2685 ? 255 : 930990283));
        var_19 = ((-((2311736801375828293 ? (arr_0 [0] [i_0]) : (arr_0 [19] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_6 [1] = (((arr_0 [i_1] [4]) ? (arr_0 [i_1] [17]) : 3004428337282942759));
        var_20 = (arr_5 [i_1]);
        var_21 = 30;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] = (arr_15 [i_3 + 2] [i_2 + 3]);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_22 = (arr_11 [i_4] [i_5] [i_6]);
                                var_23 = (arr_8 [8]);
                                var_24 = ((((-(arr_14 [i_6] [i_6] [i_4] [i_5])))) ? (((arr_0 [i_2] [i_3]) ? (arr_9 [i_4]) : (arr_1 [1] [1]))) : (((-(arr_21 [6] [i_3] [6] [i_3] [i_3])))));
                            }
                        }
                    }
                    arr_22 [i_2] = (arr_10 [i_2] [i_2]);
                    arr_23 [3] [3] [3] [i_4] = (((arr_21 [i_2] [i_2] [i_2] [i_2] [2]) ? (arr_15 [i_2] [i_3]) : (arr_11 [i_2 + 3] [i_2 + 3] [i_2])));
                }
            }
        }
        arr_24 [i_2] = (((((-(arr_18 [i_2] [i_2 + 1] [i_2] [i_2 + 4] [1])))) ? (((arr_11 [i_2] [1] [i_2]) ? (arr_9 [0]) : (arr_0 [i_2] [i_2]))) : ((-(arr_21 [i_2] [i_2] [i_2] [5] [i_2])))));
        arr_25 [i_2] [i_2] = ((((((arr_8 [i_2]) ? (arr_21 [i_2] [i_2] [15] [i_2] [i_2]) : (arr_17 [16] [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (((arr_7 [i_2] [i_2]) ? (arr_1 [1] [i_2]) : (arr_10 [i_2] [i_2]))) : (((-(arr_10 [i_2] [i_2]))))));
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        var_25 = (((arr_21 [i_9] [i_7] [i_8] [i_8] [i_2]) ? (((-(arr_33 [i_2])))) : (((arr_28 [i_2] [i_2] [i_2]) ? (arr_8 [i_7 + 1]) : (arr_26 [i_2] [i_2] [i_2])))));
                        var_26 -= ((-(arr_33 [i_2])));

                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            arr_36 [i_10] [i_9] [i_8] [i_8] [16] [i_7] [i_2] = (arr_18 [9] [i_9] [i_8] [i_7] [i_2]);
                            var_27 = (max(var_27, (arr_20 [i_2])));
                        }
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            arr_41 [i_2] [i_2] [i_2] [i_2] [i_2 + 2] [i_2] [i_2] = (((arr_7 [12] [i_7]) ? (~16135007272333723322) : ((((arr_39 [9] [i_7]) ? (arr_8 [i_11]) : (arr_32 [i_7] [i_11] [i_8] [i_2] [i_2] [i_8]))))));
                            var_28 = (min(var_28, (arr_8 [15])));
                            var_29 = (arr_8 [i_8]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 22;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 25;i_13 += 1)
        {
            {
                var_30 = ((122 ? 1 : -5623349175871626230));
                var_31 = (arr_45 [i_12] [i_13] [i_13]);
                var_32 = (min(var_32, (((((((((-5577795433368708214 ? 0 : 117))) ? (((arr_43 [10]) ? (arr_45 [i_12] [i_12] [i_12]) : (arr_43 [i_12]))) : (((arr_44 [24] [24]) ? (arr_43 [i_12]) : (arr_44 [1] [1])))))) ? ((-(arr_42 [i_12] [i_13]))) : ((-((-(arr_42 [i_12] [i_12]))))))))));
            }
        }
    }
    var_33 = ((-(--11626665093059476760)));
    #pragma endscop
}
