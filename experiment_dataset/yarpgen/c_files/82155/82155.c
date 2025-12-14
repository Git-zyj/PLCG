/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -245;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_18 &= ((((var_2 ? var_14 : (arr_3 [i_2]))) >> (((arr_2 [i_0]) >> (var_3 - 39)))));
                    var_19 = ((1021454948 ? (arr_6 [i_2]) : (arr_5 [i_2] [i_1] [10])));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_20 = (i_3 % 2 == zero) ? ((((arr_13 [i_3] [i_3 - 1] [i_3]) >> (((arr_13 [i_3] [i_3 - 1] [i_3]) - 148))))) : ((((arr_13 [i_3] [i_3 - 1] [i_3]) >> (((((arr_13 [i_3] [i_3 - 1] [i_3]) - 148)) + 110)))));
                                var_21 = ((((((arr_8 [i_3] [i_3]) > (arr_13 [i_3] [i_1] [i_3])))) > ((1 ? 5 : -6))));
                                var_22 = ((!(arr_10 [i_5] [i_3] [i_3] [i_1])));
                            }
                        }
                    }
                    var_23 = (max(var_23, ((((arr_17 [9] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_3 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            {
                                var_24 = 0;
                                var_25 = var_15;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_26 = ((!(arr_7 [i_9] [i_1] [i_8] [i_3])));
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = 4294967295;
                            }
                        }
                    }
                    var_27 = (((arr_3 [i_0]) ? (arr_18 [i_0] [i_1] [i_3] [i_0]) : 1));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_28 = (var_5 > 1);
                    arr_34 [i_10] [i_10] = -1;
                    var_29 ^= (max((max(0, ((var_4 ? var_8 : (arr_29 [i_0] [i_0]))))), (((((max(180, (arr_23 [i_10] [i_0] [i_1] [i_0] [i_0])))) ? (((arr_11 [i_0] [15] [i_0]) - (arr_33 [i_0] [i_0] [i_0] [i_0]))) : (max(var_3, (arr_1 [i_1] [i_1]))))))));
                    arr_35 [i_0] &= (max((((((~(arr_12 [i_0] [i_0] [i_0] [i_10])))) ? ((max(var_10, (arr_5 [i_0] [i_0] [i_0])))) : (max((arr_27 [i_0] [i_0] [i_1] [i_0]), -1380841730)))), ((max(var_10, 104)))));
                    var_30 = 22;
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    var_31 = ((+((127 ? (arr_7 [i_0] [i_1] [i_1] [i_1]) : 1))));
                    var_32 = 0;
                }
                var_33 = arr_37 [i_0] [i_0] [i_1];
                arr_40 [i_1] [i_0] [i_0] = (max(0, (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])));
            }
        }
    }
    var_34 = (max((max((240 % var_15), (var_1 != var_14))), var_14));
    var_35 = (((max((!57), (max(var_16, 1)))) ? ((2047 ? (1380841730 | -6) : -var_16)) : (((((var_9 >> (var_2 - 121)))) ? ((max(var_3, var_15))) : var_12))));
    var_36 = (max((max(((var_2 ? var_9 : 0)), 127)), (max((1 & 127), ((161 ? 0 : -113508889))))));
    #pragma endscop
}
