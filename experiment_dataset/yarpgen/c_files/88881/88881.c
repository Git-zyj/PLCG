/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_10 = (max(var_10, ((max((((var_7 - var_1) ? (((min(-5448, (arr_4 [i_1] [14] [i_0]))))) : (var_2 + var_1))), (((!(!var_7)))))))));
                var_11 = ((((((arr_0 [16] [i_0]) ? var_2 : var_4))) ? 5447 : 4993377160781896768));
                arr_5 [i_0] [i_1] [i_1] = (((max(57282, (1 - 8361923792516147921))) / (((arr_1 [i_0]) / (((0 ? (arr_0 [i_0] [i_0]) : (arr_2 [i_0]))))))));
            }
        }
    }
    var_12 = (max(var_7, (((((var_9 ? var_3 : var_0))) ? (var_7 + var_2) : (((1 ? var_8 : var_1)))))));
    var_13 ^= 1721763508;
    #pragma endscop
}
