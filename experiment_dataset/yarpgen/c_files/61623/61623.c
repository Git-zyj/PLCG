/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_21 *= ((((((((arr_6 [i_0]) | var_18)) / ((max((arr_1 [i_3 - 1]), var_4)))))) ? (+-14310) : var_12));
                            var_22 = ((((max(235, (max(3968, (arr_8 [i_0] [i_1] [i_2] [i_3])))))) ? var_18 : (max(((max(var_13, var_12))), (((arr_1 [5]) ? var_6 : 3994))))));
                        }
                    }
                }
                arr_10 [1] [i_0] [i_0] &= 4294963277;

                for (int i_4 = 4; i_4 < 9;i_4 += 1)
                {
                    var_23 = (max(var_23, -1));
                    var_24 &= (~3984);
                }
                var_25 = ((((((var_9 && 63951154) ? ((max((arr_12 [i_1] [i_0] [i_1] [i_1]), (arr_12 [i_0] [i_0] [7] [i_0])))) : (arr_7 [i_0] [0] [1])))) ? ((((!((max(var_8, -32091))))))) : (max((max(var_4, 4294963279)), (arr_9 [i_1] [i_1 - 1] [i_1] [10] [10] [6])))));
            }
        }
    }
    var_26 = (min(var_26, (((~(((((-1951100983 ? 18034600450131751530 : -258432709))) ? (var_0 && var_11) : var_3)))))));
    #pragma endscop
}
