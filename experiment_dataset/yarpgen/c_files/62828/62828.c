/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_0 ? -30354 : 587989216883071205)) << var_7))) ? (((((var_8 ? 3478865042438430521 : -105))) ? 8193 : var_10)) : var_5);

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_12 += ((((min(((var_7 ? 6886370569609652769 : var_1)), ((max(-15256, var_10)))))) ? (((arr_4 [i_0 - 2] [i_2 - 1]) ? -1 : (arr_7 [i_2] [i_2 + 1] [i_2 - 2]))) : var_8));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 = 749351330032046785;
                                var_14 = ((min(var_5, 60)));
                            }
                        }
                    }
                }
            }
        }
        arr_13 [i_0] = (min(var_3, (max(661846670, (arr_4 [i_0 - 2] [i_0 - 1])))));
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        arr_16 [i_5] = (i_5 % 2 == zero) ? ((max(((6886370569609652777 >> (((arr_14 [i_5]) - 38023)))), 15256))) : ((max(((6886370569609652777 >> (((((arr_14 [i_5]) - 38023)) - 1430)))), 15256)));
        var_15 = (-16319 ? (((arr_15 [i_5]) ? var_9 : (arr_15 [i_5]))) : var_6);
        var_16 = (max(((~(max(1, 0)))), (arr_15 [i_5])));
    }
    #pragma endscop
}
