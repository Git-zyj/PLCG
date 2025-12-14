/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_5));
    var_11 = ((((var_2 >> (var_4 + 449381643))) << (var_5 - 95086511)));
    var_12 = var_1;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 |= (arr_0 [i_0]);
        arr_3 [i_0 + 1] = (((arr_0 [i_0 + 1]) | 705108301));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_14 = (((arr_2 [i_0] [i_0]) && (arr_0 [i_0 - 1])));
                        var_15 = (min(var_15, (((((var_9 == (arr_9 [i_0] [i_1] [i_2 + 1] [i_2 + 1]))) ? (arr_4 [i_0] [i_2 + 1] [i_0 + 1]) : var_1)))));
                    }
                }
            }
        }
        arr_13 [8] = (arr_9 [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 + 2]);
    }
    for (int i_4 = 3; i_4 < 18;i_4 += 1)
    {
        var_16 = (max(var_16, ((((((((arr_14 [i_4]) | var_0)) ^ 3589859015)) == (((-(4294967283 >= 1061034735712105218)))))))));
        var_17 = (max(var_17, var_3));
        var_18 = (min(var_18, ((max((arr_14 [i_4]), ((min(116, (arr_15 [i_4 + 2] [i_4 + 1])))))))));
        arr_16 [i_4 - 3] = var_2;
    }
    #pragma endscop
}
