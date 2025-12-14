/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_19 = (max(((((arr_3 [i_0] [i_0] [i_0]) ? ((max((arr_4 [i_0]), (arr_2 [i_0] [i_0])))) : 1))), (min((min(13020237197495627639, (arr_4 [i_0]))), 25960447))));
                    var_20 = (arr_4 [i_1]);
                    arr_6 [i_1] [i_0] = ((+((min((arr_4 [i_1]), (arr_4 [i_2]))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_21 = (arr_4 [i_0]);

                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        var_22 = ((148821514 ? (arr_8 [i_0] [i_4 - 3] [i_4 + 1] [i_4 + 4]) : (arr_8 [i_0] [i_4 + 3] [i_4 + 1] [i_4 + 4])));
                        arr_14 [i_4] [i_4 - 3] [i_3] [i_1] [i_0] [i_4] = ((arr_2 [i_0] [i_0]) & 25960441);
                    }
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_23 = (((arr_7 [i_0]) == (((((arr_16 [i_0] [i_0] [i_3] [i_5] [i_3] [i_5]) || (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                        arr_18 [i_0] [i_1] [i_3] [i_5] = 1622424354;

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_24 = (arr_1 [i_0] [i_1]);
                            var_25 = (((((~(arr_2 [i_3] [i_1])))) ? ((((arr_15 [i_3] [i_6]) == (arr_4 [i_6])))) : ((var_15 ? (arr_12 [i_6] [i_5] [i_5] [i_3] [i_1] [i_0]) : var_3))));
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_26 = 62;
                            arr_25 [i_7] [i_5] [i_3] [i_3] [i_1] [i_7] = 2944745944999689140;
                        }
                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            var_27 = (15501998128709862494 != -63);
                            var_28 = (arr_0 [i_8 - 2] [i_8 + 1]);
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_29 = (arr_31 [i_9] [i_5] [i_1]);
                            var_30 = (arr_9 [i_0] [i_0] [i_0] [i_0]);
                            var_31 = (((arr_29 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) ? (arr_7 [i_1]) : (arr_20 [i_0] [i_0])));
                            var_32 = (!0);
                        }
                        var_33 = (arr_1 [i_1] [i_1]);
                    }
                    arr_33 [i_3] [i_3] = (((arr_29 [i_3] [i_0] [i_0] [i_1] [i_0] [i_0]) || 70));
                }
                arr_34 [i_0] = (min(3331697492027569786, ((((arr_0 [i_1] [i_0]) ? (arr_20 [i_0] [i_1]) : (arr_13 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]))))));
                arr_35 [i_0] [i_0] [i_0] = (((((arr_29 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) / (arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) / (arr_29 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0])));
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 2; i_12 < 11;i_12 += 1)
                        {
                            {
                                var_34 = 145;
                                arr_44 [i_11] [i_11] [i_11] = ((max((min((arr_28 [i_0] [i_1] [i_10] [i_11] [i_12]), 10974069549998464107)), -62)));
                                var_35 = (((((((var_9 ? (arr_13 [i_0] [i_0] [i_10] [i_10] [i_12 + 1] [i_10]) : (arr_10 [i_1] [i_1] [i_1] [i_1])))) ? (arr_7 [i_12 + 2]) : (((arr_12 [i_0] [i_0] [i_0] [i_11] [i_0] [i_10]) ? (arr_41 [i_0] [i_0] [i_10] [i_0] [i_12 - 1]) : (arr_9 [i_0] [i_0] [i_0] [i_0]))))) <= (((((arr_32 [i_12] [i_11] [i_10] [i_1] [i_0]) || (((var_9 ? (arr_28 [i_0] [i_1] [i_10] [i_11] [i_12]) : (arr_10 [i_0] [i_1] [i_0] [i_11]))))))))));
                                arr_45 [i_12 - 1] [i_1] [i_10] [i_1] [i_0] = (((((arr_28 [i_12 - 1] [i_1] [i_10] [i_11] [i_12]) || (arr_39 [i_12 + 2] [i_12 + 2] [i_12 + 1] [i_12 - 2] [i_12 + 3] [i_1]))) || (((~((var_9 ? 103 : 3521505568)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
