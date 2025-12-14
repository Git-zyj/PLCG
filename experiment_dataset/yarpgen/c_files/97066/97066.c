/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(((min((arr_1 [i_0] [14]), -55))), 10326230065308589163));
        var_15 = ((((!((max((arr_0 [i_0]), var_13)))))) ^ ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            var_16 = ((((((49152 ^ (arr_7 [i_0] [i_1] [i_2]))))) && ((((arr_4 [i_0]) % (arr_7 [i_0] [17] [i_2]))))));
                            var_17 |= ((((((((arr_7 [i_0] [i_1 + 3] [i_2]) >= 12)) ? ((max(4, (-127 - 1)))) : (53 ^ 127)))) ? (((arr_14 [i_0] [i_1] [19] [i_1 - 1] [i_1 - 1]) << (((arr_14 [i_0] [i_1] [i_1] [i_1 + 1] [i_4]) - 5097104271912047458)))) : ((((((168 ? 65535 : (arr_14 [12] [i_3] [i_2] [i_1 - 1] [i_0])))) ? ((((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_1 - 1] [i_2]) : var_7))) : (max(1, 4294967295)))))));
                            var_18 = (min(var_18, (arr_5 [i_0] [i_2] [i_3])));
                        }
                    }
                }
            }
            var_19 = (arr_6 [i_1] [i_0] [i_0]);
            var_20 = (arr_7 [i_0] [i_0] [i_1]);
        }
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_21 = (min(1777523356, -11774));

        for (int i_6 = 1; i_6 < 7;i_6 += 1)
        {
            arr_21 [i_5] [i_6] = ((((-5 * (((max(23747, 23752)))))) * ((((((arr_20 [i_5] [i_5] [i_5]) && 496)))))));
            arr_22 [i_5] [i_6] = (((min(1777523347, 4294967295)) <= 30));
        }
        arr_23 [10] = (max((arr_3 [i_5] [i_5]), (((!(arr_3 [i_5] [i_5]))))));
    }
    var_22 = (((var_6 <= (~12545))));
    var_23 -= var_1;
    #pragma endscop
}
