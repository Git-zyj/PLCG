/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = 15395427209436564822;
        arr_2 [i_0] [i_0] = (~((var_6 ? (arr_1 [i_0]) : (arr_0 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = ((!(arr_1 [i_1])));
                    var_21 = 7219725699803807843;
                    var_22 = ((arr_6 [i_0] [i_0]) ? ((11227018373905743774 ? var_14 : var_8)) : (arr_4 [i_0] [i_1]));
                    var_23 = (9836943718909724676 ? 7219725699803807842 : 7219725699803807850);
                }
            }
        }
        var_24 = (~(arr_7 [i_0] [i_0] [i_0]));
    }
    var_25 = (var_15 != var_5);
    #pragma endscop
}
