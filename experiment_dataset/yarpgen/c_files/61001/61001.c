/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((min(((var_1 ? (arr_3 [i_0]) : 5)), (arr_2 [i_0])))) ? (max(4751067587492168092, (arr_0 [i_0] [i_0]))) : (arr_0 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_14 [i_3] [i_2] [2] [i_3] |= (((((arr_13 [i_3] [i_2] [i_1] [i_1] [i_0]) > ((var_8 ? -4751067587492168093 : var_12)))) ? (((arr_2 [i_3]) ? var_13 : (arr_2 [i_0]))) : ((((!(((-24 ? 901267868 : var_13)))))))));
                        arr_15 [i_0] [i_1] [i_2] [i_0] = (((-(arr_3 [i_0]))));
                        arr_16 [i_0] [i_0] [i_1] [i_3] = var_9;
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        arr_20 [i_1] [i_1] [i_0] = (max((min(var_12, (min(1484284744, 4751067587492168092)))), (((var_10 ? (arr_13 [i_4] [i_4] [i_4] [i_4] [i_4 + 1]) : var_1)))));
                        arr_21 [i_0] [i_0] = ((~(((!((max(var_12, 16028))))))));
                        arr_22 [i_0] [i_1] [i_1] [i_2] [i_4] [8] = (arr_5 [i_0] [i_0]);
                        arr_23 [i_1] [i_1] [i_2] = 0;
                        arr_24 [i_1] [i_4] [i_2] [i_1] [i_1] = (min(((var_11 & (arr_17 [i_4]))), (6 & 6672)));
                    }
                    arr_25 [i_2] [i_0] [i_0] = ((56 ? -7904912694094688540 : 2402));
                }
            }
        }

        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            arr_28 [i_0] = (min((max((((!(arr_19 [i_5] [i_0])))), 6463780281140522340)), (~11)));
            arr_29 [i_5] = 2409186052928684066;
        }
    }
    var_14 |= 2;
    var_15 = 1;
    #pragma endscop
}
