/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_12 = (!-1);
        arr_4 [i_0] = var_0;
        arr_5 [i_0] [i_0] = 4503599627370240;
        arr_6 [i_0] = ((24576 ? ((var_6 ? (arr_2 [i_0]) : (arr_1 [i_0] [i_0]))) : var_6));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_9 [i_1] = ((((!(((10672 ? (arr_1 [i_1] [1]) : (arr_8 [1])))))) ? ((((((arr_3 [i_1]) ? (arr_2 [1]) : var_6))) ? (((arr_0 [i_1]) ? (arr_3 [i_1 + 2]) : var_11)) : 752110818)) : ((65535 ? ((((arr_7 [i_1]) ? 227 : var_10))) : var_2))));
        var_13 = (((((var_8 ? (arr_2 [i_1]) : (arr_2 [11])))) ? (~1) : (arr_7 [i_1])));
        var_14 = ((min(4136895236, -1)));
        arr_10 [i_1] = ((!(arr_0 [i_1])));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_15 = (((((arr_1 [i_2] [i_2]) ? var_1 : 78))));
        arr_13 [i_2] = (min((((max(16368, (-2147483647 - 1))))), var_5));
        arr_14 [i_2] = (~var_5);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_24 [i_2] = ((~((-var_6 ? var_1 : var_11))));
                        var_16 = ((var_10 ? (~78) : (~1)));
                        var_17 = (min(10, 0));
                    }
                }
            }
        }
    }
    var_18 = (min(var_8, (max(1, 4189704213))));
    #pragma endscop
}
