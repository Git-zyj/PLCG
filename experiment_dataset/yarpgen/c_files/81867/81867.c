/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_16 = (min(var_16, (((!(arr_4 [1]))))));
                    var_17 &= (max((min(var_10, 1)), 0));
                    arr_7 [i_0] [i_1] [i_0] = (min(1114912386, 18446744073709551608));
                }
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 21;i_4 += 1)
                    {
                        {

                            for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                            {
                                var_18 = (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_15 [i_1] [i_1] = var_15;
                                arr_16 [i_0] [i_1] [i_1] [i_0] = (((((min((max(var_12, 1)), 1)))) * (min((((var_7 ? var_4 : (arr_2 [i_1] [i_1])))), (((arr_0 [i_0] [i_1]) & (arr_8 [i_0] [i_0])))))));
                            }
                            for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [i_1] = (((var_14 ^ var_6) ? var_3 : 1));
                                arr_20 [i_0] [i_0] [i_3 + 2] [1] [i_1] = var_9;
                                var_19 = (max(var_19, (arr_18 [i_0] [i_1] [12] [i_4] [i_4 - 1])));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_20 = (((arr_8 [i_0] [i_0]) ^ (arr_8 [i_3 - 1] [i_7])));
                                arr_24 [i_1] [i_1] [i_3] [i_3] [i_3] [i_3] = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                            arr_25 [i_0] [i_1] = (((var_3 ? 1 : (arr_3 [i_1] [i_1]))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_1] = 1;
                            var_21 += (arr_2 [4] [4]);
                        }
                    }
                }

                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    var_22 = (min(var_22, (((min((1 * var_1), ((min((arr_23 [18] [i_1] [i_8 - 1] [i_8 - 1] [i_8 - 1]), (arr_22 [i_8])))))) & ((~(((arr_4 [6]) / var_15))))))));
                    var_23 -= (max((max((((var_11 && (arr_4 [18])))), (min((arr_6 [i_0] [i_0] [i_0] [i_8]), (arr_8 [i_0] [i_0]))))), 1));
                }
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    var_24 = (10460066962603696751 | 1);
                    var_25 = (1 == (max(1114912386, (arr_8 [i_0] [i_0]))));
                    var_26 = var_8;
                    var_27 = (max((arr_23 [i_1] [20] [i_0] [i_1] [i_9 + 3]), (1 - 1)));
                }
                var_28 = (max(var_28, var_8));
            }
        }
    }
    var_29 = var_6;
    var_30 = (min(var_6, -170037847811313916));
    #pragma endscop
}
