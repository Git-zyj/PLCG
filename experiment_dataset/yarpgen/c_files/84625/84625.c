/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(865474073 >= 6193621562774544237)));
    var_18 = (((~var_10) | (min((~865474073), var_9))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        var_19 = (min(var_19, ((((arr_3 [i_1] [i_2] [i_3]) ? var_6 : var_2)))));
                        var_20 = (((623934240 ? (623934237 || -2) : (((-9223372036854775807 - 1) ? 5239213124527978962 : 0)))));
                        var_21 = min(-var_14, -9223372036854775807);
                    }
                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {
                        var_22 = ((((((41374 >= (arr_2 [i_0] [i_2] [i_4]))))) ? ((var_13 ? (arr_9 [i_0] [i_4 - 2] [i_4] [i_4]) : var_4)) : (((~(((arr_10 [i_4] [i_1] [i_2] [i_4] [2]) ? -623934252 : 134215680)))))));
                        var_23 = (((+((((arr_8 [i_4]) == 1))))));
                        var_24 = (min((min((arr_11 [i_4 - 3] [i_4 - 3] [i_2] [i_4] [i_0 - 2]), (arr_10 [i_4] [i_0] [i_4] [i_2] [i_4]))), ((min((arr_9 [i_0] [i_1] [i_2] [i_4 - 2]), ((min(var_12, -64))))))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_25 = (((max(436933620, (arr_6 [i_0 - 1] [i_0] [i_0 - 1]))) << (((((-14691 ? var_10 : (arr_2 [i_0] [i_0] [i_0])))) - 58546))));
                        var_26 += (!1778334601);
                        var_27 = (12253122510935007397 & 63340);
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_28 = 12253122510935007363;
                                var_29 = (max(var_29, (max(((((arr_1 [i_0 + 1]) * (arr_1 [i_0 + 1])))), (((arr_12 [i_6] [i_6] [i_0 + 1] [i_6 - 2]) * -280618990))))));
                                var_30 = ((max((arr_13 [i_7] [i_0] [i_7 - 1] [i_7 - 3]), 63325)));
                            }
                        }
                    }
                    var_31 = ((623934240 ? 60243 : -623934272));
                }
            }
        }
    }
    #pragma endscop
}
