/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = ((var_1 == (((var_13 ? var_12 : var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_16 += ((((~(arr_4 [i_1] [i_0]))) <= (((((max(var_3, (arr_2 [i_1])))) ? var_12 : (var_4 >> var_8))))));
                var_17 += var_4;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_18 = (max(((max(2, (min(-14416, (arr_8 [i_2] [i_1] [i_2])))))), (min(((var_6 ? var_0 : (arr_10 [11] [11] [i_1] [i_1] [i_2] [i_3 + 1]))), (min(1, var_2))))));
                            arr_11 [i_2] [i_1] [3] [i_1 + 2] [i_1] [i_1 - 2] = (~4294967284);
                        }
                    }
                }
                var_19 = (11 - 4294967282);
            }
        }
    }
    var_20 = (~-1761789417);

    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                {
                    var_21 = (min(var_21, ((min((1 + -98), var_8)))));
                    var_22 = 20;
                }
            }
        }
        var_23 |= (min(((21161 | (~var_7))), (max(((69 >> (((arr_18 [6]) - 32)))), -1761789417))));
        var_24 = ((((arr_18 [0]) ? var_12 : ((((arr_15 [1]) ? var_3 : 0))))) == var_2);
    }
    #pragma endscop
}
