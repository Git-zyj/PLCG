/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((-4698038528944028666 ? ((3203724027 ? 1369199381 : 17132)) : var_2))) == (max(-17146, (min(29144, 6812259984120130884))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_13 = 178;
        var_14 = ((56 / 6812259984120130890) * (87 / 3289350573));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_15 = ((((4007 ? 3104145072 : -21084)) > (1961766086 ^ 3104145053)));
                        arr_9 [i_0] = ((37959 ? -986586286 : (min(-110, 3104145053))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 9;i_4 += 1)
    {
        var_16 &= (((~245) || (((-6074093371750392565 ? 3783568391062451031 : -9216141972343742466)))));
        arr_14 [i_4] = 3783568391062451031;
    }
    #pragma endscop
}
