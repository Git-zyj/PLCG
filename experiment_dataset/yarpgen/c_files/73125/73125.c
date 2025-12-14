/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_10);

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((((((arr_0 [i_0]) ? 3344651060 : var_6))) ? ((min(var_3, (arr_0 [i_0])))) : (min(var_9, (arr_1 [12])))))) ? 4294967295 : (((arr_2 [i_0]) ? (arr_0 [i_0 - 3]) : 18192))));
        var_20 = (((((1 ? ((-22 ? -23245 : 108)) : ((1239554961 ? 101 : var_12))))) ? (((+(((arr_1 [i_0 - 3]) ^ -78))))) : -var_15));
        arr_4 [i_0] &= ((((min(70, (arr_2 [i_0 - 2])))) ? ((((arr_2 [i_0 + 3]) == -6414466849809729926))) : (arr_0 [i_0 - 4])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_21 = (arr_5 [i_0 + 1]);
                    var_22 = var_11;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_13 [i_3] = (((arr_1 [i_3]) ? 1099585464 : (arr_5 [i_3])));
        var_23 -= ((~(arr_11 [13])));
    }
    var_24 = ((max(((var_10 ? 3104099411 : 166), var_10))));
    var_25 = var_13;
    #pragma endscop
}
