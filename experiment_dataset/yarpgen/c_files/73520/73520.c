/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_14);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_0] = 2894514221;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_16 ^= (max((arr_8 [i_1] [9] [i_1 + 1] [i_1 + 1]), (((var_5 ? (arr_0 [i_0]) : var_7)))));
                        var_17 &= 9080042055563499723;
                    }
                    var_18 |= (((((var_8 ? ((((arr_12 [i_0]) | var_1))) : (min(var_0, 119))))) ? ((min((min(var_11, var_5)), -5116623559999075174))) : ((-7434230881683963060 + (!1343249601233862387)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] = min(((6157917427271331948 ? (arr_14 [i_0] [i_0] [i_0]) : 6542441672010801698)), 1016046582);
                                var_19 = (max(var_19, (~var_13)));
                                var_20 = (max(var_20, (((((min(251028779680085153, 11273156278004299299))) ? (((!17103494472475689228) ? -1903804443 : 45550)) : 3278920713)))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_23 [i_0] [i_2] = -3052;
                        var_21 = 1216613402;
                        arr_24 [i_0] = 17103494472475689253;
                        arr_25 [i_1] [i_6] &= (((((-2124272336 ? 834251048 : 1216613428))) ? 3973165946 : (~513098360)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
