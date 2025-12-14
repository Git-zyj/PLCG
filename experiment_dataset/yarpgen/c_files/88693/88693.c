/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88693
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [8] [i_1 + 3] [i_0] [i_1 + 3] [0] = var_8;
                                var_12 ^= ((((max(7492, -2061828269))) + ((~(arr_4 [i_3 - 2] [i_1 + 1] [8] [7])))));
                                var_13 = (min(var_13, (((((((var_8 / (arr_6 [i_0] [i_1] [i_4] [i_3]))))) ? 0 : (((arr_4 [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_3 - 1]) ? ((((arr_3 [i_0]) - 7492))) : (min((arr_5 [i_4]), (arr_7 [i_1 + 3] [i_2] [i_1 + 3] [i_4]))))))))));
                            }
                        }
                    }
                }
                arr_14 [i_0] = (arr_12 [i_0] [i_1] [i_1] [i_0] [i_0] [6] [i_1 + 1]);
                arr_15 [i_0] [i_0] = 524280;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_14 = (max((max((arr_16 [i_5 + 2]), (arr_16 [i_5 + 2]))), ((-(arr_16 [i_5 + 1])))));

                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    var_15 = (max((((((arr_22 [i_5]) ? (arr_22 [i_7 - 2]) : (arr_21 [i_6] [10] [14] [i_5]))) & (arr_19 [i_5]))), var_5));
                    var_16 ^= (arr_23 [i_5] [i_5] [i_7] [i_7 + 2]);
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    var_17 = (((arr_23 [i_5] [7] [i_8 + 1] [i_5 + 1]) ? (((arr_18 [i_5] [i_5]) >> (((arr_22 [i_8]) - 18133)))) : (((arr_17 [i_5 - 2] [i_5]) ? -1617391447409893404 : 1))));
                    arr_26 [i_5] [i_6] [i_5] [16] = (!7505);
                }
            }
        }
    }
    var_18 = var_0;
    var_19 = 0;
    var_20 = ((!(~3050331876)));
    #pragma endscop
}
