/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 = ((-5527 ? 23378 : 16038088947759068452));
        arr_3 [4] &= (arr_1 [1] [1]);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        for (int i_2 = 4; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_12 [i_4] [i_3] [i_3] [i_3] [i_1] = ((var_9 ? var_11 : (arr_8 [i_1] [i_1])));
                        arr_13 [i_3] [i_2] [i_3] = ((!((23378 || (arr_6 [i_1])))));
                        arr_14 [i_1] [i_1] [3] [i_3] = (((arr_8 [i_2 - 4] [i_2 - 4]) ^ (arr_8 [i_2 - 3] [i_2 - 3])));
                        arr_15 [i_3] = -var_6;

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            arr_19 [i_1] [i_2 + 1] [i_5] [i_3 - 2] [i_5] [i_5] &= ((var_19 ? (arr_18 [i_1] [i_1] [i_2] [i_1] [0] [i_1] [i_2 + 1]) : (arr_18 [i_3 - 3] [8] [i_1] [i_3 - 3] [i_1] [i_2 - 4] [i_2])));
                            var_21 = (((!(arr_17 [i_1] [i_1] [i_3] [i_1]))));
                        }
                        for (int i_6 = 2; i_6 < 16;i_6 += 1)
                        {
                            var_22 = ((((arr_17 [i_1] [i_3 - 2] [i_3] [i_6]) || var_4)));
                            arr_22 [i_1] [12] [i_1] [i_2] [i_6] &= 41936;
                            var_23 = (((arr_18 [i_1] [i_1] [i_3] [i_1] [1] [0] [i_3]) * (!16038088947759068452)));
                        }
                    }
                    for (int i_7 = 3; i_7 < 16;i_7 += 1)
                    {
                        arr_25 [i_7] [i_3] [i_3 - 1] [i_3] [10] = ((~(((41936 <= (!42157))))));
                        arr_26 [i_1] [i_3] [i_3] [11] = ((-(min((~var_13), (arr_20 [1] [i_3 - 2] [10] [i_1])))));
                    }
                    arr_27 [i_3] = ((((min(((161 ? (arr_17 [i_1] [8] [i_3] [i_3]) : (arr_9 [i_1] [13] [i_3]))), ((var_15 ? (arr_8 [i_2] [i_3 + 1]) : (arr_6 [i_2])))))) ^ -16038088947759068452));
                }
            }
        }
    }
    var_24 = -var_1;
    var_25 = var_6;
    #pragma endscop
}
