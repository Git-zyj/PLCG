/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = var_13;
    var_19 = ((max((max(19, -32755)), 49469)));
    var_20 = (min(var_6, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_15;
                var_21 = 549755813887;

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_22 = (min((arr_3 [i_0] [i_1 - 1] [i_2]), ((var_8 << (var_5 + 109)))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_23 = var_0;

                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            var_24 ^= var_5;
                            var_25 -= var_11;
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_26 = ((((max((arr_16 [i_1 + 1] [1]), (arr_16 [i_1 - 1] [i_1 - 1])))) + ((112 ? var_10 : 207025842))));
                            arr_18 [i_0] [i_0] [i_0] [13] [0] = var_0;
                        }
                        var_27 = (min(((min(var_11, var_7))), (-32757 == 0)));
                        var_28 = ((32756 || (((var_7 >> (((arr_1 [i_3]) - 2674434256)))))));
                        var_29 = var_8;
                    }
                    var_30 = (min((max((max((arr_8 [1] [0] [i_0]), -19)), (min((arr_1 [22]), var_7)))), var_10));
                    arr_19 [7] [i_1] [10] [i_1] = (arr_13 [8] [i_2]);
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    arr_23 [i_6] = ((((1 ? (max(var_16, 9007199254740991)) : (arr_15 [i_0] [i_0] [i_0]))) * var_11));
                    var_31 = (!var_6);
                }
            }
        }
    }
    #pragma endscop
}
