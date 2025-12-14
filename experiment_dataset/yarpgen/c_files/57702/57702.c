/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (((8774356282154636434 == ((((((arr_3 [i_0]) & 1))) ? (((-(arr_2 [i_0])))) : (max(var_10, 8774356282154636434)))))))));
                var_18 = (max(var_18, var_11));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {

                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    arr_13 [i_2] [i_3] [i_4 - 1] = ((((((((arr_11 [i_2] [i_3] [i_4 - 1]) | (arr_8 [i_3]))) != (arr_6 [i_2]))))) < (((arr_11 [i_4 - 1] [i_4] [i_4 - 1]) ? (arr_10 [i_4 - 1] [1] [i_4 - 1] [i_4]) : (arr_11 [i_4 - 1] [i_4] [i_4 - 1]))));
                    var_19 = max((min(30479, (max((arr_6 [i_2]), (arr_8 [i_2]))))), (arr_10 [i_2] [i_2] [i_3] [i_4 - 1]));
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_22 [i_2] [i_2] [i_5] [i_5] [i_6 - 1] [i_2] [i_2] = (((((max(var_11, (arr_16 [i_2] [i_3] [i_6] [i_7])))) & (min((arr_14 [i_2] [i_3] [i_3]), var_16)))));
                                var_20 = (max(var_20, (arr_16 [4] [4] [i_5] [i_7 - 1])));
                                var_21 = (arr_21 [i_2] [i_7 - 2] [i_3] [i_5] [i_7] [4]);
                                arr_23 [i_2] [0] [i_5] [0] [i_7] &= ((((max((arr_18 [i_7 - 2] [i_2] [i_7 - 2] [i_6 - 2]), (arr_18 [i_7 + 1] [i_3] [i_5] [i_6 - 1])))) ? ((((arr_18 [i_7 + 2] [i_2] [i_2] [i_6 - 1]) ? var_15 : var_6))) : (((arr_16 [12] [12] [i_7] [i_6 - 3]) ^ (arr_18 [i_7 - 1] [i_3] [i_5] [i_6 + 1])))));
                                var_22 = (min(var_22, (((((((((arr_6 [6]) == 0)) ? (arr_21 [4] [i_7 + 2] [i_6 - 2] [i_7 - 2] [i_6 - 2] [4]) : (arr_6 [14])))) || (((arr_7 [i_7 - 3] [2]) && (arr_7 [i_7 + 1] [4]))))))));
                            }
                        }
                    }
                    arr_24 [i_2] [i_3] = (max((arr_10 [i_2] [i_3] [i_3] [i_2]), 1));
                    arr_25 [i_2] [i_3] [i_3] [i_2] = ((((((~var_2) ? ((-8774356282154636435 ? (arr_10 [i_2] [17] [i_5] [i_2]) : (arr_8 [i_2]))) : (arr_15 [i_2])))) & (arr_9 [i_2])));
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 16;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_23 = (max(var_23, ((((arr_11 [i_2] [i_3] [i_2]) ? (arr_9 [i_8 + 1]) : (arr_34 [i_3] [i_8 - 2] [i_9] [13]))))));
                                var_24 = (((((arr_29 [i_2] [4] [i_8 - 1] [i_10]) < (arr_19 [i_2] [i_10] [i_8]))) && 1));
                                var_25 = (max(var_25, (arr_20 [i_8 + 2] [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_8 - 2] [i_8 - 2] [i_8 + 2])));
                                arr_35 [i_2] [i_2] [12] [i_9] [9] = (arr_9 [i_2]);
                            }
                        }
                    }
                    var_26 = (-108 || -6896631118590647990);
                    arr_36 [6] [12] &= ((arr_28 [i_8 + 1] [i_3] [i_2] [i_2]) >= (arr_28 [i_2] [i_2] [i_8 + 2] [i_2]));
                    arr_37 [i_2] [i_2] = (((arr_20 [i_2] [i_3] [i_3] [i_8 + 1] [i_8] [i_3] [i_8 - 2]) > (arr_20 [i_2] [i_3] [i_8] [i_8 - 1] [i_3] [6] [i_8])));
                }
                var_27 = (arr_34 [i_2] [i_3] [i_3] [i_2]);
            }
        }
    }
    var_28 = var_2;
    var_29 = var_12;
    #pragma endscop
}
