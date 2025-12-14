/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = (max(-35, (min(var_17, var_19))));
                        var_20 = (min(var_20, ((min(58687, 1)))));
                    }
                    arr_12 [i_0] [i_2] [i_2] [i_2] = (-2147483647 - 1);
                    var_21 = (max(var_21, (arr_0 [i_0])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_18 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2] = ((((max((~var_11), (~var_16)))) * (((((var_0 ? -1383908089 : (arr_17 [1] [16] [12] [i_4] [i_5])))) ? (max(var_9, -8618797639775569537)) : (~var_14)))));
                                var_22 = (min(var_22, ((min((max(448, (~-8618797639775569555))), 8618797639775569532)))));
                                var_23 = (max(var_23, ((((arr_4 [i_5 - 1]) >= (((((var_2 ? var_0 : var_17))) ? (((11926 ? 1 : (arr_16 [i_0] [i_0] [i_2] [i_4] [i_1])))) : (max(-8618797639775569537, var_11)))))))));
                            }
                        }
                    }
                    arr_19 [i_2] [i_0] [i_2] [i_2] = (arr_10 [i_0] [i_0] [i_0] [i_0] [14] [i_0]);
                }
            }
        }
    }
    var_24 = (min(var_24, var_15));
    #pragma endscop
}
