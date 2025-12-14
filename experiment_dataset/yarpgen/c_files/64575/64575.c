/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = (9 - 2656981242312024593);
        var_17 = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) ? (arr_0 [3]) : var_3))));
        arr_2 [i_0] = ((-262435941 >= (max((arr_0 [i_0]), (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_18 = ((+(max((arr_5 [i_1]), (arr_5 [i_1])))));
        arr_6 [i_1] [i_1] |= (arr_4 [i_1] [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 18;i_4 += 1)
                {
                    {
                        var_19 -= ((!(~-194792842)));
                        var_20 -= (max(((~(arr_5 [i_1]))), (arr_4 [i_4] [18])));
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        arr_16 [1] [i_5 - 1] = (((-8728031905309505949 + 9223372036854775807) << ((((1483831492 >> ((((9 ? 28352 : 28352)) - 28347)))) - 46369734))));
        arr_17 [i_5] = (max((arr_15 [i_5 + 1] [i_5 - 1]), (arr_15 [i_5 - 1] [i_5 - 1])));
    }
    var_21 = var_13;
    #pragma endscop
}
