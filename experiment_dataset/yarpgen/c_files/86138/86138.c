/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_6 != (min((max(24, 1272960038938194494)), 18))));
    var_19 = 12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_20 = ((var_0 ? (arr_0 [1] [1]) : (((arr_3 [i_0]) * (((arr_2 [i_0] [i_1] [i_0]) ? (arr_0 [i_1] [i_0]) : 9950))))));
                var_21 = (min(var_21, ((((((((18 ? (arr_3 [i_1]) : 19701)) << (-24 + 34)))) ? (arr_1 [i_0] [19]) : 0)))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_7 [i_0] [7] [1] = (arr_1 [i_0] [i_1]);
                    var_22 = (min(var_22, ((((var_4 ? (arr_3 [i_1]) : (arr_5 [i_0]))) <= (arr_1 [i_0] [i_2])))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_1] [i_3] [i_3] = ((10 != (arr_3 [i_3])));
                        var_23 += 0;
                    }
                }
                var_24 = (((arr_3 [i_1]) ? (((arr_3 [i_0]) << (((arr_3 [i_1]) - 3162761630)))) : (arr_3 [i_0])));
            }
        }
    }
    var_25 = (min(var_17, 47));
    #pragma endscop
}
