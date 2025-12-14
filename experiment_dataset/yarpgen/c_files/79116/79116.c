/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((min(var_9, (var_6 / 9)))) ? -var_10 : (((var_11 - var_0) ? ((127 ? 3263401748313518525 : var_2)) : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = (max((~1), var_4));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_20 = arr_0 [i_0] [i_3];
                            var_21 = ((arr_0 [i_3] [i_1]) ? ((+((var_6 ? (arr_9 [i_0] [i_1] [i_1] [i_2] [i_3] [15]) : (arr_9 [i_3] [i_2] [i_1] [i_1] [i_0] [i_0]))))) : var_17);
                            var_22 ^= (((((((min(var_8, (arr_3 [i_1])))) ? (((arr_5 [i_0]) ? (arr_2 [i_1]) : 0)) : (((min((arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), 175))))))) ? (arr_3 [i_0 + 2]) : -1698736182));
                        }
                    }
                }
                var_23 = (min((((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 2]))), (((arr_1 [i_0 - 2]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 3])))));
                var_24 = ((var_6 ? (((((-(arr_6 [i_1] [i_1] [i_0 - 1])))) ? (((arr_5 [i_0]) ? 0 : (arr_6 [i_1] [i_0] [i_0]))) : (((~(arr_8 [i_0 - 2] [1] [i_0 + 2] [15] [i_0])))))) : (((-1 ? 65514 : 4908990818327611807)))));
                var_25 = (!2892762478);
            }
        }
    }
    var_26 = (max(var_26, (((var_0 ? (((~(-1880413391 != var_1)))) : (!var_6))))));
    #pragma endscop
}
