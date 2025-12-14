/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [12] |= -13608158030042934893;
        var_11 = ((-(((arr_1 [i_0] [i_0 - 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_12 = min(322019704, -859234391);
                        arr_10 [i_3] [i_0] [i_0] [i_0] = (126 < 4063232);
                    }
                }
            }
        }
        var_13 &= (max(-2147483647, (((!(((17179738112 ? (arr_9 [i_0]) : 4063207))))))));
        arr_11 [i_0] [i_0] = ((-((1 | (arr_6 [i_0 - 1])))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 11;i_4 += 1)
    {
        var_14 |= (arr_9 [i_4]);
        var_15 = (4063241 / var_6);
    }
    var_16 = min(3102071366, -4063208);
    var_17 = var_9;
    #pragma endscop
}
