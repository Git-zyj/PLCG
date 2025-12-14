/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        var_18 = (min(var_18, var_8));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 ^= ((var_12 ? (min((arr_0 [i_1]), (~var_12))) : (arr_5 [i_1] [i_2])));
                    var_20 = (min(-9955, ((((arr_4 [i_0 + 1] [i_1 + 1] [i_1 + 1]) <= 16293)))));
                    var_21 = min((max((-22781 == 4611), -15566)), (arr_0 [i_1]));
                }
            }
        }
        arr_6 [1] [i_0] = (~22766);
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        arr_16 [i_6] [i_4] [i_3] [i_3] = (arr_3 [i_3] [i_3] [i_3]);
                        arr_17 [i_3] [i_4] [i_4] [i_3] [i_6] [i_6] = -22744;
                        arr_18 [i_6] [i_3] [i_3] [i_3] = (((~14972) ? ((18 ? 1 : -32749)) : ((min(1, 1)))));
                    }
                }
            }
        }
        arr_19 [i_3] = ((((((arr_3 [i_3] [i_3] [i_3]) ? 1 : (arr_12 [i_3] [i_3] [i_3])))) ? ((min((arr_3 [i_3] [i_3] [i_3]), var_12))) : ((max(var_12, (arr_12 [6] [i_3] [i_3]))))));
        var_22 += 1;
    }
    var_23 = var_3;
    #pragma endscop
}
