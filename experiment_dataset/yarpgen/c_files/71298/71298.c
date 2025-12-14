/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_8;
    var_17 = ((min(2400724026, 0)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((((21572 ? ((((var_10 || (arr_3 [i_0] [i_1]))))) : (min((arr_4 [i_0] [i_1 + 1]), 1894243269))))) ? (max(37193, 4114131094)) : ((max(((0 ? var_11 : (arr_5 [i_0] [i_1]))), ((((arr_3 [i_0] [i_1]) < 4185579444739451228))))))));
                arr_7 [i_0] = ((((((var_8 ^ 8138271784510976256) != ((((arr_3 [i_0] [i_0]) ? (arr_2 [5] [i_0] [i_1 - 1]) : (arr_0 [i_0] [i_0]))))))) < 112));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 = ((((arr_3 [i_0] [i_0]) ? ((1894243269 / (arr_4 [i_0] [4]))) : ((((arr_11 [5] [i_1] [i_2 - 2] [i_3]) * 63934))))));
                            var_19 = (((~var_15) ? ((((((43964 ? var_7 : var_14)) > (12949453226651073359 < 1))))) : (((((arr_3 [i_0] [i_2]) ? var_1 : 2646985356703873939)) + var_9))));
                        }
                    }
                }
            }
        }
    }
    var_20 = (var_10 || var_1);
    #pragma endscop
}
