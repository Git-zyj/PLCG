/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = (max(var_2, ((((max(28166, var_10))) ? (((var_3 ? -8688234910656877595 : var_6))) : var_0))));
    var_13 = (((-((var_9 ? 149 : var_4)))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 = (min(162, 15726876084198681914));
            var_15 = 129;
        }
        var_16 += (min((arr_1 [i_0]), (arr_1 [i_0])));
        var_17 = (~var_7);
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_13 [i_2] = -90;
                var_18 |= 141;
                var_19 = ((((min((((81 ? (arr_9 [i_2] [i_2]) : 63295))), (~15726876084198681919)))) ? (((min(177, -66)))) : (((!(arr_6 [i_2 - 2]))))));
                var_20 = ((-((140 ? ((((arr_5 [i_2]) + 5514))) : (((arr_11 [i_2] [i_2]) ? var_8 : 21404))))));
            }
        }
    }
    #pragma endscop
}
