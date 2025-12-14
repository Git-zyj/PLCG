/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((!(arr_0 [i_0])));
                var_13 = (max(var_13, -3221967626775211076));
                var_14 -= ((59 - ((var_2 - ((min(var_5, (arr_2 [i_1]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_13 [i_3] = ((-((((min((arr_8 [i_2]), var_8))) ? (arr_9 [i_3] [i_2]) : ((var_6 / (arr_3 [i_2])))))));
                var_15 = (max(var_15, (arr_12 [i_2] [i_2])));
                var_16 = (min(var_16, (arr_10 [i_3])));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_19 [i_5] [i_4] [6] [10] [i_2] = (((-(arr_2 [i_4]))));
                            arr_20 [i_5] [3] = (min((((arr_12 [1] [i_3]) / (arr_0 [i_4]))), 1));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
