/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_5;
    var_16 *= var_13;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] = var_0;
                    arr_9 [13] [21] [1] [13] = ((-var_2 + (max(((max(0, (arr_6 [i_0] [11] [1] [1])))), ((29918 ? (arr_7 [i_2] [1] [i_2] [13]) : -6550))))));
                    var_17 = (((((arr_6 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]) * -14526)) * (((arr_1 [21] [12]) ? -29918 : (31 == var_12)))));
                    arr_10 [18] [5] [1] = var_6;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = arr_14 [i_0] [i_0] [i_0] [i_0];
                                var_19 = (max((((-190 >= var_1) - ((min(-31786, 1))))), (((!(arr_6 [i_0 + 1] [i_1] [i_2] [i_3 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 &= var_6;
    #pragma endscop
}
