/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((var_11 ? (var_6 > var_14) : 1))), ((max(4294967287, var_12)))));
    var_16 = (max(var_16, (((137 ? 56 : -1613580642)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_10;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    var_17 = (arr_4 [i_0]);

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_18 &= ((-(-118 | var_12)));
                        arr_13 [i_0 + 1] [i_0] [i_3] = var_0;

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_19 = (max(var_19, (arr_2 [i_0 + 1] [i_1] [i_1])));
                            var_20 ^= (arr_12 [i_0 - 1] [i_4] [i_0 - 1] [i_1]);
                            var_21 = (~(~-7121433286725110713));
                            var_22 = (min(var_22, ((((((arr_12 [i_0] [i_2] [i_0] [i_2]) ? 1 : var_13)) != 26)))));
                        }
                        for (int i_5 = 4; i_5 < 16;i_5 += 1)
                        {
                            var_23 |= (arr_16 [i_0] [i_0] [i_0] [i_2] [i_0 - 1] [i_1] [i_5 - 1]);
                            var_24 -= ((arr_10 [i_1] [i_2] [i_1] [i_1]) ? ((4294967287 << (-7808123649838365271 + 7808123649838365271))) : (arr_9 [i_0] [i_5] [i_0 + 2]));
                        }
                        var_25 += (((((var_12 ? var_1 : (arr_12 [i_0] [i_2] [i_2] [i_2])))) ? ((90 ? var_0 : 0)) : 5925855));
                    }
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                {
                    var_26 = ((((max((arr_19 [i_0 + 3] [i_0 + 3] [i_0]), 3433948442))) ? (arr_2 [i_0] [i_1] [i_6]) : (((((arr_8 [i_6] [i_6] [i_0] [i_6]) >> (((-2147483638 - -2147483628) + 23)))) * (((max((arr_3 [i_0] [i_6]), var_10))))))));
                    var_27 = 127;
                    var_28 = (min(var_28, 0));
                    var_29 = ((1 ? 27 : 2147483647));
                }
                var_30 |= (arr_1 [i_1]);
            }
        }
    }
    var_31 = (((var_2 ? var_5 : ((min(var_3, 1))))));
    #pragma endscop
}
