/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_6 ? ((((max(8192676544817147258, var_2))) ? ((min(16518, 93))) : (min(var_8, var_9)))) : 76));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0] = -20;
                            arr_15 [i_0] [i_1] [i_2] [i_3] = ((((min((((~(arr_0 [i_0])))), (min((arr_1 [i_1] [i_0]), (arr_2 [i_2])))))) | ((((arr_4 [i_0] [i_2] [i_3 + 1]) / (arr_1 [i_2] [i_2]))))));
                            arr_16 [i_3] [i_2] [i_0] [i_0] [5] = ((-(((arr_11 [i_0] [i_3 + 2]) ? (arr_11 [i_0] [i_3 - 3]) : 3868444371604345881))));
                            arr_17 [i_1] [i_3] = (((arr_0 [17]) ? (((((min(19600, 91)))) | (567894432 | 76))) : var_14));
                            var_21 = ((((((76 ? var_7 : -8321655174585824775)) | (((min(var_0, var_11)))))) != (((16519 ? ((var_13 ? var_17 : var_1)) : ((max((arr_4 [i_0] [i_2] [i_3]), (arr_11 [i_0] [i_0])))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_22 = (arr_18 [i_0] [i_1]);
                            var_23 = (((arr_4 [i_4] [i_5] [i_4]) && (((arr_10 [i_0] [i_1] [i_4] [9] [i_0] [i_5]) > (13433138109985909281 % var_8)))));
                            arr_24 [i_0] [i_1] [i_4] [i_4] = 309811918;
                            var_24 = (min(((((-(arr_10 [i_0] [i_0] [i_1] [i_5] [i_0] [i_1]))) / (arr_21 [i_0] [i_4] [i_4] [i_0]))), ((4763504372082515028 ? (arr_7 [i_1] [i_1] [i_5]) : -70))));
                        }
                    }
                }
            }
        }
    }
    var_25 = (((~-114) | (!-8321655174585824785)));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            {
                var_26 -= ((arr_25 [i_6] [i_6]) % (((((((min((arr_7 [i_6] [i_7] [i_7]), var_11))) + 2147483647)) >> (((arr_10 [i_6] [i_6] [i_7] [i_7] [i_7] [i_7]) - 13836))))));
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                arr_37 [i_6] [12] [i_10] [i_9 - 1] [i_10] = (((arr_35 [i_6] [i_7] [i_8] [i_7] [i_10]) == ((((min((arr_11 [i_7] [i_8]), 57975))) ? (arr_25 [i_6] [i_6]) : var_12))));
                                arr_38 [i_10] = ((-((~(arr_33 [i_9 - 1] [i_9 - 1] [i_6] [10])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 3; i_11 < 9;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            {
                arr_43 [i_11 - 3] [i_12] = (arr_36 [i_11 - 3] [i_12] [i_12]);
                arr_44 [i_12] [i_12] = ((-10 != ((-92 ? 45936 : ((3756447666 ? -3349818782735622088 : 69))))));
                arr_45 [i_12] = (arr_28 [i_11] [i_12]);
            }
        }
    }
    #pragma endscop
}
