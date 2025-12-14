/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_16 = ((-(((!(arr_0 [i_0] [i_0]))))));
        var_17 = ((min((((arr_1 [i_0] [18]) ? 14314 : 14314)), 14314)));
        var_18 = ((((((((arr_0 [i_0] [i_0]) < 192)))) >= 4811689451569483619)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        var_19 += 14314;
        var_20 = (((((4811689451569483618 ? 65535 : (arr_2 [i_1])))) ? ((511 ? 2800323683 : 4294967288)) : (32753 + 1140335437)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_10 [i_2] = (!-21903);
                    var_21 = (((arr_7 [i_2] [i_3]) >= 13635054622140067985));
                    var_22 = ((1233745333462612164 ? (arr_0 [i_1] [i_2]) : 4294967295));
                    var_23 = (~(arr_0 [i_3] [i_1]));
                    var_24 = -31;
                }
            }
        }
        arr_11 [i_1] = (arr_4 [i_1]);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = (arr_7 [i_4] [18]);
        var_25 = (arr_2 [i_4]);
    }
    var_26 = ((min((max(var_2, var_11)), var_2)));
    #pragma endscop
}
