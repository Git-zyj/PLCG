/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57238
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_12 = var_10;
                            arr_14 [i_0] [i_1] [i_2] [i_3] = 1048572;
                            arr_15 [i_0] [i_0] [i_0] [i_3] = arr_12 [i_0] [i_1] [8] [i_3];
                        }
                    }
                }
                var_13 = min((min(((242 ? (arr_5 [i_0] [i_0] [i_1]) : (arr_1 [2]))), var_4)), -533901839);
                arr_16 [7] [7] [7] = min(((((((var_6 == (arr_4 [i_1] [i_0])))) < ((((arr_12 [i_0] [i_0] [i_0] [i_0]) != (arr_6 [i_0] [8] [4]))))))), (min(((var_0 ^ (arr_5 [i_0] [5] [7]))), (758315657 | 1476655948))));
            }
        }
    }
    var_14 += (var_4 && var_10);
    #pragma endscop
}
