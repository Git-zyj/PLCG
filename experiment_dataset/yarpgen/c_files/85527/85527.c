/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = (min(var_19, var_0));
                var_20 = (((max((var_9 + var_5), var_4)) >= (((~(arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1]))))));
            }
        }
    }
    var_21 = (max(var_21, (((((min((~var_17), var_12))) ? (min(((var_7 ? var_18 : var_8)), (min(var_15, -9047134795544613015)))) : (((max((max(var_0, var_7)), (var_17 || var_9))))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {
            {
                var_22 = ((+(max((arr_1 [i_3 - 2]), (arr_2 [i_3 - 1])))));
                var_23 = (arr_7 [i_3 - 2] [i_3 - 3]);
            }
        }
    }
    #pragma endscop
}
