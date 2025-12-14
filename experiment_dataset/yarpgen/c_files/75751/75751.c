/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-((((min(var_10, 39632))) + var_6))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = 39632;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_0] = (-(((arr_1 [1] [1]) ? var_3 : 6833)));
            arr_5 [i_0] [0] [i_1] = (-(arr_0 [i_1 + 1] [i_1 + 1]));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_13 = ((-(arr_3 [i_0] [i_2])));
            var_14 = (~25904);
            var_15 = ((25904 ? var_6 : 12296553369661874893));
        }
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        arr_19 [i_3] [i_3 - 3] = var_8;
                        var_16 *= ((-(var_9 && 9647788031540349543)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
