/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = -12470456249920177393;
                arr_5 [i_0] [i_1] [i_1] = var_10;
                var_21 = (max(var_21, 2533704630595847602));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_18 [i_2] [i_2] [i_3] [i_4] [10] [i_5] &= ((((max(((min((arr_2 [i_5] [i_4]), 32758))), (((arr_11 [i_3] [i_5]) * var_16))))) ? (min(var_10, (arr_16 [i_2] [i_3] [i_4] [i_4]))) : ((((93 ? -1108228964 : 1108228964))))));
                            var_22 = ((((min(var_19, 23)))));
                            arr_19 [i_2] [i_3] [i_2] [i_5] = var_5;
                            var_23 = (min(var_23, (arr_3 [i_4] [i_4])));
                        }
                    }
                }
                arr_20 [i_2] [i_2] = (min(((var_1 ? (arr_17 [i_2] [i_2] [i_2] [i_2] [i_3]) : (arr_17 [i_2] [i_2] [i_2] [i_2] [i_3]))), ((-1108228973 ? (arr_8 [i_2] [i_3]) : 32767))));
                var_24 = (arr_7 [i_2]);
                var_25 |= (arr_17 [i_2] [i_2] [i_2] [10] [8]);
            }
        }
    }

    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        var_26 = arr_27 [i_6] [1] [i_7] [i_9];
                        arr_32 [10] [14] [i_7] [i_6] [10] |= -var_7;
                    }
                }
            }
        }
        arr_33 [i_6] = (((((-1108228973 - (-1154192533 != 93)))) ^ ((-var_0 ? 3238669029 : (((max(1, 0))))))));
        arr_34 [i_6] = -1122105270544361718;
        arr_35 [i_6] [i_6] |= (arr_28 [10] [i_6 - 1] [i_6]);

        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            var_27 = (min(var_27, 3258322014));
            arr_39 [i_6] [i_10] [i_10] = var_13;
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_28 = -3286389161458554501;
            arr_43 [i_11] = ((((((2147483647 <= 13588762795108711768) ? -2147483637 : 26914))) ? ((min(-81, 4920))) : 1108228973));
            var_29 = (max(((-(((arr_22 [i_6 - 1]) ? 0 : 4086)))), (((max(-32, 1108228974)) | (arr_31 [i_11])))));
            var_30 = 0;
        }
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            arr_46 [i_6 - 1] [i_12] = 1;
            arr_47 [i_6] = (var_0 < ((min((((84 < (arr_38 [12])))), (min(-1108228968, (arr_45 [i_6] [i_6])))))));
            /* LoopNest 3 */
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_31 = ((((((var_3 && (((arr_51 [i_6 - 1] [i_12] [i_14]) || var_11)))))) + (min(((0 ? 4294967295 : 4998)), (arr_24 [i_6] [i_12] [i_6 - 1])))));
                            arr_56 [i_6] [i_6] [5] [i_13] [i_13] [i_14] [i_14] = -18168;
                        }
                    }
                }
            }
            var_32 = 48;
        }
    }
    var_33 = (max((max(var_8, var_6)), var_17));
    #pragma endscop
}
