/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (arr_1 [2] [i_1]);
                var_14 ^= ((((min((arr_2 [i_1]), ((10 >> (var_8 + 50594619)))))) ? 7859779031449325828 : ((((max((arr_1 [i_0] [1]), var_8)))))));
                var_15 = (min(var_15, ((min((((arr_3 [i_0]) ? -2915006842801970276 : var_7)), (2668021134 <= 0))))));
            }
        }
    }
    var_16 = ((((min(var_3, (-32767 - 1)))) ? var_6 : var_4));
    #pragma endscop
}
