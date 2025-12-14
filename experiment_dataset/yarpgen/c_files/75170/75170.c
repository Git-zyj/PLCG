/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_13);

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_4 [i_1] [i_0] [i_1 + 1] = ((-((max((arr_2 [5] [i_0]), (arr_3 [i_0] [i_0] [i_0]))))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                arr_7 [0] [i_0] [i_2] = (arr_2 [3] [7]);
                arr_8 [i_0] [i_0] [i_2] [i_2] = (((arr_1 [i_0]) / (((-(arr_6 [i_0] [i_1]))))));

                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] [i_0] [i_0] = (((arr_3 [i_0] [i_1 + 1] [i_1 - 1]) % (arr_6 [i_1 - 1] [i_1])));
                    arr_12 [i_1] [i_0] [6] [i_3] [i_3] [i_3] = (((((~(arr_2 [i_0] [i_0]))) + 2147483647)) << (((!(arr_3 [i_0] [i_0] [i_0])))));
                }
            }
            arr_13 [i_0] = ((((arr_0 [i_0]) / (arr_3 [i_0] [i_0] [i_1]))));
            arr_14 [10] = (min((arr_6 [i_0] [i_1]), (((((arr_2 [10] [10]) || (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) && ((((arr_6 [i_0] [i_0]) - (arr_0 [i_0]))))))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_17 [i_0] [8] = (min((((~(arr_0 [i_0])))), ((((arr_0 [i_4]) - (arr_5 [i_0] [i_4] [8]))))));
            /* LoopNest 2 */
            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_24 [i_0] [i_0] [i_4] [i_4] [i_0] [11] = ((!(((arr_23 [i_6] [11] [i_0] [i_0] [i_4] [i_0]) > (arr_6 [i_0] [i_0])))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = ((((((max((arr_1 [2]), (arr_5 [i_0] [1] [i_0]))) >= (((((arr_15 [i_0] [i_4] [i_5 + 2]) < (arr_20 [1] [i_4] [13] [i_6])))))))) == (max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), ((((arr_22 [i_6] [i_0] [i_0]) == (arr_20 [i_6] [i_5 + 2] [i_4] [i_0]))))))));
                        arr_26 [13] [i_0] [i_5 + 3] [i_6] [i_6] = ((~(arr_2 [i_0] [i_4])));
                    }
                }
            }
        }
        arr_27 [i_0] = (((!((max((arr_19 [i_0]), (arr_19 [4])))))));
        arr_28 [i_0] [i_0] = (min(((max((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_0])))), ((-(min((arr_15 [i_0] [i_0] [i_0]), (arr_0 [10])))))));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 17;i_7 += 1)
    {
        arr_33 [8] = ((!((!(arr_31 [i_7 + 3])))));
        arr_34 [i_7] [6] = (((-(arr_31 [i_7]))));
    }
    #pragma endscop
}
