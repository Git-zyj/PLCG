/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_6;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_21 = ((((var_19 / var_11) | var_6)));
        var_22 = (min(var_22, 1));
        var_23 = (min(-1, 0));
        var_24 &= (((arr_0 [i_0]) ? (min(((max(var_13, 1))), ((var_0 ? (arr_0 [i_0]) : var_17)))) : (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_25 = (max(var_25, (arr_3 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 9;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_26 &= (arr_4 [i_3] [i_4]);
                            var_27 = (var_16 || 1);
                            var_28 = 1;
                        }
                        var_29 = ((arr_10 [7] [i_2] [i_2 - 1] [i_2]) ? (min(var_15, var_17)) : -var_5);
                    }
                }
            }
        }
    }
    #pragma endscop
}
