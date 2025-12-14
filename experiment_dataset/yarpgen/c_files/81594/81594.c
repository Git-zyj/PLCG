/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((17 % var_15) ? -var_10 : var_8))) || var_3));
    var_17 = 1483000980407668703;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, var_8));
                            arr_13 [i_1] [i_1] [i_1] = 4273958251;
                        }
                    }
                }
                var_19 = (5006154817092215998 & 13440589256617335623);
                arr_14 [i_1] = ((((var_5 < (32362 >= -32376)))));
            }
        }
    }
    var_20 = 13440589256617335623;
    #pragma endscop
}
