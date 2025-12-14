/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (7408 ? var_11 : (((arr_0 [i_0]) ? 0 : (58117 != -157675776))));
        arr_3 [i_0] |= (((((65524 ? 4894943928121487745 : (((284709835 ? var_9 : (arr_2 [i_0]))))))) ? (((arr_1 [i_0] [i_0]) + var_12)) : -890552144));
    }

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            var_14 = ((((min((max(var_3, var_0)), 7408))) ? (arr_4 [i_1]) : (((var_12 + 2147483647) << (((max(var_0, (arr_5 [i_1] [i_1]))) - 899026343))))));
            arr_8 [i_1] = (((1358303400 && 27) != ((((min((arr_4 [i_1]), -890552160))) ? ((-890552144 ? 3021174722803224510 : var_1)) : var_8))));
        }
        arr_9 [i_1] = ((-157675782 ? (((!var_3) ? var_12 : -63)) : ((((!((!(arr_4 [14])))))))));
        arr_10 [i_1] = ((!1796421379680479088) && (((3613849468 + 65508) && (!3340773817873132497))));
        var_15 = ((!((((arr_4 [i_1]) ? -4550296744162814404 : (arr_4 [i_1]))))));
    }
    #pragma endscop
}
