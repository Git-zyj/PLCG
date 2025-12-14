/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -1669264952;

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] = (arr_9 [i_0] [i_2]);

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_17 = (min(var_17, ((min(((((arr_4 [i_2] [i_4]) ? var_13 : (arr_4 [i_2] [i_4])))), (arr_9 [i_4] [i_0 + 3]))))));
                            var_18 -= var_6;
                        }
                        arr_14 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0] [i_0 + 3] [i_3] = 21929;
                    }
                }
            }
        }
        arr_15 [15] [i_0] = (min((min(1, 7624253389959767444)), -25131));
        arr_16 [i_0] = (max((arr_4 [i_0] [i_0 - 2]), ((var_4 ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((arr_5 [i_0] [i_0 + 1]) | (arr_13 [i_0] [17] [i_0] [i_0] [i_0])))))));
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_19 = (min(var_19, (((arr_3 [1]) ? (((4488718965162936526 ? -110078300 : -1681430721249978698))) : ((((var_12 + (arr_2 [i_5] [i_5]))) * (((((arr_6 [i_5] [i_5] [i_5]) == var_4))))))))));
        arr_20 [i_5] = (max(-110078291, 3774534282111296956));
        arr_21 [i_5] [i_5] |= min((min(((((arr_10 [i_5] [4] [i_5]) ? (arr_7 [i_5]) : (arr_1 [i_5])))), ((1 ? 1681430721249978688 : 3341884503569766380)))), (arr_9 [10] [i_5]));
        var_20 = (min(var_20, (((((min((arr_17 [i_5]), (arr_17 [i_5])))) ? ((((!(arr_17 [i_5]))))) : ((4488718965162936535 % (arr_17 [i_5]))))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_21 = (-(arr_23 [i_6]));
        arr_24 [i_6] = -1681430721249978695;
        var_22 = (arr_23 [i_6]);
    }
    var_23 = (!2047);
    var_24 = (max(var_24, var_10));
    var_25 = (((((var_2 & var_3) / ((((var_14 + 9223372036854775807) >> (-2 + 10)))))) * (max(var_3, (((-2 ? 1 : var_15)))))));
    #pragma endscop
}
