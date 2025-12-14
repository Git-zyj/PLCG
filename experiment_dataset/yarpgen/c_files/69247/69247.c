/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((var_7 ? var_11 : (min(1, ((776295478 ? var_11 : var_10))))));
    var_13 = (min((((!(((var_0 ? var_1 : -1685160112)))))), ((var_2 ? var_6 : (min(var_11, var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    arr_9 [i_1] = (min(1, 0));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_1] [i_1] = (min(var_5, (min(var_7, (arr_14 [5] [i_2] [i_2] [i_1] [9])))));
                                arr_17 [i_1] [i_3] [i_0] [i_1] = ((((48607101 & (arr_1 [i_4])) | var_3)));
                            }
                        }
                    }
                    arr_18 [i_0] [i_0] [i_0] [i_1] = (max(var_9, (min((max((arr_12 [i_0] [i_0] [10] [i_1] [i_1] [i_1] [i_1]), var_11)), (((135107988821114880 ? -1424803062 : var_5)))))));
                    var_14 = -1;
                    var_15 = ((var_7 ? (var_0 > var_0) : 1));
                }
                var_16 ^= (max((21417 < 48607101), ((var_7 > (((max(1, var_2))))))));
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 4; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_17 = (min(var_17, (((min(var_5, (arr_3 [1] [1])))))));
                            var_18 -= (arr_23 [3] [i_1] [i_1 - 1] [i_1 - 1]);
                            var_19 = (min(var_19, (((((((((min(var_2, var_6))) < var_0)))) | (((arr_1 [i_1 + 1]) | (124 && 0))))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_7 = 0; i_7 < 17;i_7 += 1)
    {
        var_20 = (arr_26 [i_7] [i_7]);
        var_21 = (((-(arr_27 [i_7] [i_7]))) >= var_3);
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 16;i_10 += 1)
                {
                    {
                        arr_35 [i_7] [i_7] [i_7] [i_10] [i_7] = (((((min(var_10, (arr_29 [i_7]))))) > (arr_26 [i_7] [i_8])));
                        var_22 = (arr_34 [i_10] [i_7] [i_10] [i_10]);
                        arr_36 [i_10] = (arr_26 [i_7] [13]);
                    }
                }
            }
        }
    }
    var_23 = (max(var_23, ((max((!var_5), var_4)))));
    #pragma endscop
}
