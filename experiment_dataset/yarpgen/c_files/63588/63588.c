/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, 8371));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = -321619424;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                        {
                            var_15 = (arr_6 [i_0] [i_1 - 1] [i_0] [i_3]);
                            var_16 = (arr_7 [i_4] [i_2] [i_1] [i_0]);
                            var_17 = (arr_9 [i_2]);
                            var_18 = (((arr_9 [i_1]) ? (arr_7 [i_4] [i_3] [i_1 + 1] [i_0]) : (arr_11 [i_1 + 1] [i_1 + 1] [i_2] [i_3] [i_4])));
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_19 = (max(321619424, 1));
                            var_20 = ((!((min((arr_6 [i_3] [i_3] [i_2] [i_2]), (min((arr_1 [i_2]), 4092)))))));
                            var_21 = (max((max((((-1955305835 ? (arr_4 [i_5] [i_2] [i_2] [i_0]) : (arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))), (max(-321619424, (arr_5 [i_0] [i_1] [i_2]))))), (arr_5 [i_2] [i_2] [1])));
                            var_22 = 1;
                            var_23 = (max((arr_5 [i_1 + 4] [i_1 + 2] [i_1 + 3]), (((~(arr_13 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_0] [i_2]))))));
                        }
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            var_24 = ((!((max((min(1914592622, 1)), 1)))));
                            var_25 = ((((max(163, (arr_18 [i_6 + 1] [i_2] [i_1 + 2])))) >> (((arr_18 [i_6] [i_3] [i_1]) + 21079))));
                        }
                        var_26 = 26080;
                    }
                    var_27 = arr_7 [i_0] [i_0] [i_2] [i_2];
                    var_28 ^= (max((arr_7 [i_0] [i_0] [i_1] [i_1]), (((!((((((arr_13 [i_2] [i_1] [i_1] [i_0] [i_0] [i_1]) + 2147483647)) >> (((arr_6 [i_2] [i_2] [i_2] [i_0]) - 56922))))))))));
                }
            }
        }
    }
    #pragma endscop
}
