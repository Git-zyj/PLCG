/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_16 |= (max(((max(var_10, var_6))), ((max((arr_0 [i_0 + 1]), (arr_1 [i_0 - 1] [i_0 - 3]))))));
        arr_3 [i_0] = var_0;
        var_17 = (max((arr_2 [i_0 - 2]), ((min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 3]))))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 20;i_3 += 1)
                {
                    {
                        var_18 = (min((~var_0), (((((arr_9 [i_3] [i_1] [i_0]) ? var_14 : (arr_8 [i_0] [i_1])))))));
                        var_19 = (min(var_19, (((+((((!var_12) <= (max((arr_9 [i_0] [i_0] [i_0]), (arr_4 [19] [i_1])))))))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                {
                    var_20 &= (((arr_6 [i_0 + 1]) ? (min((arr_6 [i_0 - 1]), (arr_6 [i_0 + 1]))) : ((-(arr_6 [i_0 - 1])))));
                    var_21 = ((-(arr_0 [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_22 = (min(var_22, (arr_18 [i_0] [i_0 - 1] [i_6 + 1] [10])));
                                var_23 *= ((+((((arr_4 [i_7] [i_5]) + var_10)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = ((((max(var_8, -839385941))) ? (!var_9) : ((((min(var_6, var_7))) ? (var_10 || var_11) : ((min(var_11, var_12)))))));
    var_25 = (max(var_25, var_1));
    var_26 = (max(var_26, (~var_14)));
    var_27 = (~var_2);
    #pragma endscop
}
