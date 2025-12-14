/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_7));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_10 [i_0] [5] [i_0] = ((var_6 <= (((max(var_1, (arr_3 [i_2]))) & (var_4 || var_8)))));
                    var_11 = (min(var_11, ((((var_1 & var_5) ? (arr_9 [i_0] [i_2]) : (max(((((arr_1 [i_0]) & var_7))), (((arr_2 [i_0] [i_1 - 1]) ? var_5 : (arr_8 [i_0] [i_1] [i_2 + 2]))))))))));
                }
            }
        }
        var_12 = (((((0 ? 0 : 1))) ? (min(((1 << (-105 + 117))), ((max(-105, var_2))))) : (((((max(30882, -1092897985))) || ((max(1, -48))))))));
    }
    #pragma endscop
}
