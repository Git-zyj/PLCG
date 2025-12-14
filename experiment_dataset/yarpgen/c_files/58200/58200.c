/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        var_13 = (min(var_13, 572247920));
        var_14 = (max(var_14, 3722719375));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0 - 3] [i_1] [i_0] = ((572247901 || ((!(arr_7 [i_2 - 1] [i_2 - 1] [i_1 - 1] [i_0 + 2])))));
                    var_15 = (min(var_15, -51));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        var_16 = 7;
        arr_13 [i_3] = (arr_9 [i_3]);
        arr_14 [i_3] [i_3 + 1] = (max((arr_10 [i_3]), ((((!(arr_10 [i_3]))) ? (arr_12 [i_3] [i_3]) : 1))));
        var_17 = ((!(((+((149 ? (arr_10 [i_3]) : var_9)))))));
    }
    var_18 = (min(var_18, (max((18097800721464131988 ^ var_12), (((-((min(var_1, var_10))))))))));
    var_19 = var_7;
    #pragma endscop
}
