/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_7 [i_2] [13] [i_2] = var_9;
                    var_10 = (arr_1 [i_0] [i_0]);
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_11 = (max(var_11, ((max(((((arr_9 [i_0 - 2]) == var_0))), var_5)))));

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 20;i_5 += 1)
                            {
                                var_12 |= (arr_2 [i_0 + 1] [i_0 - 1] [i_0 - 1]);
                                arr_18 [i_5] [i_3] [i_3] [i_3] [i_0 - 1] = arr_15 [i_0 - 1] [i_0 + 1];
                            }
                            for (int i_6 = 2; i_6 < 19;i_6 += 1)
                            {
                                arr_23 [i_0] [i_1] [i_1] [i_3] [10] [i_6] [i_6 - 2] |= ((-24979 & (max((arr_10 [i_0 + 1] [i_6 - 2] [i_6] [i_6]), (arr_10 [i_0 - 1] [i_0 - 1] [i_4] [8])))));
                                arr_24 [i_3] = (((((min(25002, 18059)))) ^ var_1));
                            }
                            arr_25 [i_0] [i_1] [i_3] [i_3] [i_3] = (arr_15 [i_0] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_13 |= ((((var_3 ? (var_7 && var_9) : var_5))) % var_0);
    var_14 = (min(var_14, (((var_2 ^ (min((var_9 >= var_7), (max(var_8, var_1)))))))));
    var_15 = var_5;
    #pragma endscop
}
