/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88449
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [6] = ((((max(-4675, (((arr_3 [i_0]) % 1))))) ? (((-(1 * 1)))) : (max((arr_1 [i_0 + 1]), 12645262149643663122))));
                arr_6 [11] [i_1] [i_0] |= (((1017209382 & (arr_3 [i_0 + 1]))));
                arr_7 [i_0] [i_1] [i_1] = ((~(arr_0 [i_0 + 1])));
                arr_8 [i_1] = (min((min(var_8, ((((arr_2 [i_0]) * -177718300))))), (arr_1 [i_0 + 1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_18 [i_2 - 1] [i_2 - 1] = (((((((arr_16 [i_2] [i_3] [i_3] [i_3 + 1] [i_4]) ? (arr_1 [i_4]) : 14708821484577917279)) - ((max(535, var_6))))) > ((((arr_9 [i_2 - 1] [i_3 + 1]) ^ (arr_1 [i_3 + 1]))))));
                            var_11 |= (arr_13 [i_3 + 1]);
                            var_12 |= (min((((var_7 != (arr_2 [i_2 - 1])))), ((3577919730 ? (arr_2 [i_2 - 1]) : 1))));
                        }
                    }
                }
                var_13 = (((((127 ? (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 2]) : var_6))) ? ((min(8388607, (arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 2])))) : (((arr_15 [i_3 + 1] [i_2 + 1] [i_2 - 1]) + 12288))));
                var_14 = (min(((((arr_1 [i_2 - 1]) + (arr_11 [i_2 + 1])))), ((min(-2099, (arr_12 [i_3] [13]))))));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_25 [i_7] [i_6 + 1] [i_3] [i_2 - 2] = (min((((~(arr_11 [i_7 + 4])))), (min((arr_19 [i_2 - 1]), (arr_19 [i_2 + 1])))));
                            var_15 = ((~((min(var_1, (arr_9 [i_3] [i_3]))))));
                            arr_26 [i_2 - 1] [i_2 - 1] [i_6] = (((min((arr_10 [i_2 - 2] [i_6 + 1]), (arr_10 [i_7 - 2] [i_2 - 2]))) > ((max((arr_4 [i_7] [i_6] [i_3]), var_6)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
