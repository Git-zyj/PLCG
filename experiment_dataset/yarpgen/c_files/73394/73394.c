/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = 12341135094706147270;
                    var_10 = (max(var_10, var_1));
                    var_11 = ((-426950889 ? ((~(arr_6 [i_0] [i_1] [i_2] [i_2]))) : (arr_0 [i_0] [0])));
                    var_12 = (arr_3 [i_1]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            {
                var_13 = ((((arr_10 [i_4]) ? 0 : ((15227470078766644365 ? 37 : 9946)))));
                var_14 = (min(var_14, ((min((((((37 ? (arr_13 [i_4]) : (arr_4 [19] [i_3]))) == (!var_3)))), (arr_6 [18] [9] [11] [9]))))));
            }
        }
    }
    #pragma endscop
}
