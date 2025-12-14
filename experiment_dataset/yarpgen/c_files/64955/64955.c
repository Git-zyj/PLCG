/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (((1 ? 1888056144 : 1)));
    var_18 += (((((~(!var_10)))) ? 3 : ((((((3 ? var_7 : 0)) <= 4294967295))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = ((!((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 1)))));
        arr_4 [i_0] = (((((((7 ? 4294967292 : 1))) ? 64 : (191 + 1))) << (min(6, ((1 ? 5983145330522740652 : var_11))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_15 [i_1] [8] [i_1] [i_2 - 1] = (~-1);
                    var_19 = (!64);
                    var_20 = (!var_3);
                }
            }
        }
        var_21 = (((~var_6) + 1));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_22 = ((1 ? -1693411368 : (arr_14 [i_4])));
        var_23 += ((!(arr_17 [i_4])));
        var_24 = ((arr_7 [4] [i_4]) ? (!77) : (((arr_7 [2] [i_4]) ? (arr_2 [i_4]) : (arr_6 [16]))));
    }
    #pragma endscop
}
