/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_11;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    {
                        var_19 = var_6;
                        var_20 ^= (((((var_9 ? ((min((arr_0 [i_0] [20]), (arr_7 [i_0] [i_1] [i_2] [i_3])))) : (((arr_3 [i_0]) ? var_14 : 43101))))) ? (((arr_5 [i_1] [i_1] [i_1]) ? var_12 : (arr_8 [i_0] [i_3 + 2] [i_0] [i_0 - 1] [i_0]))) : ((22435 ? (arr_7 [i_0] [i_0] [i_3] [i_3]) : (arr_7 [i_0] [i_3 + 2] [i_0 - 1] [i_3])))));
                        var_21 = ((((min(var_3, ((var_2 * (arr_8 [i_0] [i_1] [i_2] [i_1] [2])))))) ? 1 : 221));
                    }
                }
            }
        }
        arr_9 [i_0 - 1] [i_0] = (max(-var_10, var_0));
    }
    var_22 ^= var_16;
    var_23 = (max(var_23, ((((((var_4 ? var_15 : var_9))) ? (!var_0) : var_7)))));
    #pragma endscop
}
