/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((180 ? ((274877906944 ? 170 : 16465574209983872050) : var_6))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (min(14577913814563969013, 21055))));
                    var_20 -= 16465574209983872050;
                    var_21 = (!var_16);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_22 = (((((~(11826547411083970554 > var_6)))) ? (((var_10 ? 85 : (((!(arr_9 [i_2] [i_3]))))))) : (min((var_7 != var_9), (1981169863725679566 + 47)))));
                                var_23 = ((!(arr_5 [i_0 - 1])));
                                arr_13 [i_0] [8] [i_2] [i_2] [8] [i_4] = ((-((-((var_5 ? -30736 : var_3))))));
                                var_24 &= 274877906944;
                            }
                        }
                    }
                }
            }
        }
        var_25 = ((((~(((arr_10 [9] [8] [21] [9]) & 210)))) ^ ((~(min(var_17, 30766))))));
        arr_14 [i_0] = (-((var_3 ? (var_15 | var_1) : (((min(var_10, 97)))))));

        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            arr_17 [i_5] = (((((arr_11 [i_5] [0] [i_5]) ? (((var_3 ? -1 : var_14))) : var_17))) ? (min(var_7, ((((arr_1 [i_0]) - var_6))))) : (!var_8));
            arr_18 [i_5] [i_5] = (max((((((~(arr_1 [i_5]))) == ((min(160, var_5)))))), (((arr_2 [i_5]) ? (!var_9) : var_2))));
            var_26 = max(((((((arr_2 [i_5]) ? var_10 : var_16))) ? ((((var_9 + 2147483647) << (((arr_7 [i_0] [5] [5] [7]) - 137))))) : 18446744073709551613)), (((((max(var_9, var_3))) ^ (var_4 ^ var_9)))));
            var_27 = (((arr_3 [i_0] [i_0] [i_0]) | 32767));
        }
        var_28 = (~21266);
    }
    #pragma endscop
}
