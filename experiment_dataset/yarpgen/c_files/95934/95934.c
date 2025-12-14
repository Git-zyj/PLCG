/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min(var_1, (-127 - 1)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (arr_6 [i_0] [i_0] [i_1] [1])));
                    arr_10 [i_0] [i_0] = ((-((~(0 || -1642988972)))));
                    arr_11 [i_0] [i_1] [1] &= (max(((max((arr_1 [1]), (arr_1 [2])))), ((-25896 * ((var_11 >> (((arr_9 [8] [i_1] [6]) - 2938546752))))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_17 = (((max((~var_11), (max(1085015460, (arr_12 [i_3 + 1]))))) << (((arr_16 [i_3] [i_3]) ? ((max(var_0, var_13))) : (max(-1085015468, var_14))))));
                    var_18 = ((-((((arr_12 [i_3 + 1]) < (arr_12 [i_3 - 2]))))));
                }
            }
        }
    }
    var_19 = ((-var_6 ? ((((((var_12 ? -25896 : var_13))) ? (max(var_14, var_12)) : -1085015460))) : var_5));
    #pragma endscop
}
