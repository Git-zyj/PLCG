/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_0 ? (var_10 * 65535) : (((var_3 && var_7) ? 0 : var_5)));
    var_12 -= (((((var_6 ? ((17977 ? 4678 : 65535)) : ((min(0, 17977)))))) & (max(var_8, ((max(var_6, var_2)))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!((((((var_5 ? 47562 : var_3))) ? ((((!(arr_1 [i_0] [i_0]))))) : (max((arr_1 [i_0] [i_0]), (arr_0 [i_0]))))))));
        var_13 -= ((!(~var_4)));
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    arr_10 [i_3] [i_3] [i_3] = ((((0 + (arr_4 [i_1 - 4]))) <= (-29022 <= 730630430)));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                var_14 *= max((((!(arr_12 [i_1] [i_2 + 1] [i_3] [16])))), 16);
                                var_15 = (+(min((min((arr_3 [i_2] [i_5]), var_5)), (((arr_13 [i_1] [i_2 - 1] [i_2 + 2] [19] [i_2 - 1] [i_5]) - var_3)))));
                                var_16 -= (((-32767 - 1) ? 2636570016 : 960795189));
                            }
                        }
                    }
                }
            }
        }
        arr_17 [i_1] [i_1] = (((!var_6) ? (arr_5 [i_1 - 3] [i_1]) : 8446291608428566240));
        arr_18 [i_1] = ((((min((arr_9 [i_1 - 2] [i_1 + 1] [i_1 - 3]), (~9)))) ? (((!7936) ? (arr_13 [i_1] [i_1] [i_1 - 4] [i_1] [7] [i_1]) : (arr_0 [i_1]))) : (!65535)));
        var_17 -= var_4;
        arr_19 [5] [i_1] = ((min((min(2800454599, 1), (arr_11 [i_1 - 4] [i_1 - 3])))));
    }
    #pragma endscop
}
