/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 = 96181447;
                                arr_16 [i_0] [i_0] [i_0] [i_2] = (var_3 == var_13);
                                arr_17 [i_2] = (max((((!(arr_12 [i_3 + 2] [i_3 + 2] [i_3] [i_3] [i_3] [i_3 + 3] [i_3 + 3])))), (((arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 3] [i_3 + 3] [i_3]) % (arr_12 [i_3 + 3] [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1])))));
                                var_21 = 0;
                            }
                        }
                    }
                }
                var_22 = ((+(max((arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]), (arr_10 [i_1 + 1])))));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 13;i_7 += 1)
                        {
                            {
                                arr_27 [i_7] [i_6] [i_6 + 1] [i_5] [i_5] [9] [i_7] = min((((((3 >> (886803236 - 886803231)))) | ((3780284269679855595 | (arr_18 [i_0]))))), ((((((var_13 ? var_13 : (arr_18 [i_7])))) ? 10522455200830974479 : var_2))));
                                var_23 &= var_10;
                            }
                        }
                    }
                    var_24 = (max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((1 * var_19) ? (var_17 > var_12) : ((65 ? var_7 : 1))))));
                }
                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_25 = ((((0 == (arr_15 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))) ? (arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]) : ((-(arr_15 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])))));
                    var_26 = (max((min((((var_0 && (arr_9 [i_0] [i_0] [i_0] [i_8] [i_0])))), (((arr_26 [i_0]) ? var_4 : (arr_2 [9]))))), (((((max((arr_12 [12] [9] [5] [i_1 - 1] [i_1 - 1] [i_8] [i_8]), (arr_0 [i_0] [i_1 - 1])))) || (min(0, 1)))))));
                }
            }
        }
    }
    var_27 = -1;
    #pragma endscop
}
