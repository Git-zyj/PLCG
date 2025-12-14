/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_13));
    var_21 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] |= 1;

                    for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_22 = (max(var_22, 18388));
                        var_23 = 102366248101139660;
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_24 = (min(var_24, -18388));
                        arr_15 [i_4 - 1] [i_4] [i_4] [i_4] [i_1] [i_0] = 1;
                    }
                    arr_16 [i_0] = -853396404;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_20 [i_0] [i_1] [i_5] = 853396404;
                    var_25 = 0;
                    var_26 = (min(var_26, 4051668326));
                }
                arr_21 [i_0] [i_0] [i_1 - 4] = -26391;
            }
        }
    }
    #pragma endscop
}
