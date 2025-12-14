/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_4;
    var_12 = (((max(18446744073709551615, 4096)) > var_1));
    var_13 = (max(var_13, -var_2));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_0 - 1] [12] [12] = arr_1 [i_1] [i_2];
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_14 *= var_0;
                                var_15 = (max(var_15, ((min((max(((var_6 ? var_10 : (arr_10 [i_1] [i_1] [i_3 + 1] [i_4]))), 18446744073709551615)), ((var_9 ? 8315435422500956541 : (arr_10 [i_2 - 1] [i_4] [i_2 - 1] [i_4]))))))));
                            }
                        }
                    }
                }
            }
        }
        arr_16 [i_0] [i_0] = ((!(((var_2 ? (max(2, var_5)) : ((min(35493, var_10))))))));
        var_16 = ((8315435422500956541 ? 560094672 : 1));
        var_17 = (arr_8 [i_0]);
    }
    var_18 = ((var_3 ? (-42 >= 1338902441043985937) : (((((var_2 ? var_3 : var_5))) ? var_5 : var_9))));
    #pragma endscop
}
