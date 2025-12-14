/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_9 [12] [13] [i_2] = -47;

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        var_11 = (min(var_11, 4258285600121175823));
                        var_12 ^= (max(14188458473588375793, (((arr_8 [i_1 + 1]) ? 4258285600121175822 : 8796093022208))));
                        var_13 = (-(min((arr_8 [i_2]), (((arr_0 [10]) ? (-9223372036854775807 - 1) : 14188458473588375795)))));
                        var_14 = (max(var_14, 0));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_15 ^= (arr_2 [i_1]);
                        var_16 &= (((((arr_4 [i_0 - 1] [i_1 - 2] [i_0 - 1]) ? 14188458473588375800 : (arr_4 [i_0 - 1] [i_1 - 2] [i_4]))) >> (((((arr_4 [i_0 - 1] [i_1 - 2] [i_4]) ? 4258285600121175823 : 32)) - 4258285600121175794))));
                        arr_16 [i_0] [1] [i_2] [i_4] = (max(-1833522032, var_4));
                    }
                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        var_17 *= arr_3 [i_5 - 1];
                        var_18 += ((9223372036854775780 ? 14099972803856789908 : -1));
                        arr_21 [i_5] [i_5] = 0;
                    }
                }
            }
        }
    }
    var_19 *= 0;
    var_20 = 10;
    var_21 += var_4;
    var_22 = (max(var_4, var_8));
    #pragma endscop
}
