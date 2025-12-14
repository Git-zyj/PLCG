/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((1 + (max((!59052), (min(var_2, var_7))))));
    var_19 = (min(var_19, (((var_8 ? var_11 : (min((((var_7 ? var_1 : var_11))), (var_4 - -431499134))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((min((((arr_2 [i_0]) ? var_10 : var_12)), 32767)) <= (max((arr_3 [i_0] [i_1]), 7936)));
                arr_6 [i_0] = (~(arr_3 [i_0] [i_0]));
            }
        }
    }
    #pragma endscop
}
