/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((-((min(var_5, var_1))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 += (arr_2 [12]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_21 = ((-(arr_0 [i_2 - 1] [i_2 - 4])));
                        var_22 = (max(((var_10 ? (arr_1 [i_2]) : 2143984657)), (((((arr_1 [i_0]) ? var_7 : var_1))))));
                        var_23 = ((26098 ? 755514467 : -2143984665));
                        var_24 = (((((2143984657 | (~2143984643)))) ? (-2143984666 - 46484) : (min(var_15, (~14210117339274698807)))));
                    }
                    var_25 = -1;
                }
            }
        }
    }
    #pragma endscop
}
