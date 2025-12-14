/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 ^= var_2;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 *= (((max(1, 1)) ? (arr_3 [i_1] [i_2]) : 408484362));
                    arr_10 [i_0] = (min((min(((max((arr_1 [14] [i_0]), (arr_0 [i_0] [i_1])))), (max((arr_7 [i_0]), (arr_5 [i_0] [i_1] [i_2]))))), ((max((arr_4 [i_2] [i_1] [i_0]), ((max(1, 1))))))));
                    var_18 *= (arr_1 [i_0] [i_1]);
                }
            }
        }
        arr_11 [i_0] [i_0] = var_5;
    }
    var_19 = (((((var_11 ? ((var_7 ? var_8 : var_2)) : var_12))) ? var_15 : var_15));
    var_20 *= var_5;
    var_21 *= var_11;
    var_22 ^= (max(408484378, -95));
    #pragma endscop
}
