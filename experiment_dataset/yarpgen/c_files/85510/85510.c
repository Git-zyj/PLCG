/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_11 = (max(var_11, ((min(((min(((65028164 ? (arr_0 [i_0] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 - 1]))), (var_2 - -88)))), (arr_1 [i_0] [i_0 + 2]))))));
        arr_2 [i_0] [i_0] = 215;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_12 = (min(var_12, ((min((((arr_3 [i_0 - 2] [i_0 - 2]) ? (~997162918) : (min(var_1, 23)))), (arr_1 [i_0] [i_1]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            var_13 = -var_8;
                            var_14 = (arr_9 [i_0 + 1] [i_1] [i_2] [1] [i_4 + 1]);
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_15 = -var_3;
                            arr_16 [i_0] [i_1] [i_2] [17] [i_3] [i_5] = ((-((-65 ? (((arr_6 [17] [i_1] [i_2] [i_1]) ? var_5 : (arr_15 [i_5] [13] [i_3] [i_2] [i_1] [i_0] [i_0]))) : (arr_15 [i_5] [i_5] [i_0 - 2] [i_0 - 3] [i_0] [i_0 - 1] [i_0])))));
                        }
                        var_16 = (max(var_16, ((!(arr_12 [24] [22] [22] [i_0 - 1])))));
                        var_17 &= ((var_6 - ((((var_8 ? 120 : var_9)) - (min(var_7, var_9))))));
                        arr_17 [i_0] [i_1] [i_1] [i_3] = (min((arr_8 [16]), -13163));
                    }
                }
            }
            arr_18 [i_1] [i_1] [24] = (min(((-((232 ? (arr_0 [i_1] [i_1]) : 216)))), ((215 * ((var_8 ? var_6 : (arr_7 [i_1] [i_1] [i_0])))))));
            var_18 = 4294967280;
        }
    }
    var_19 = (max(var_19, (((((((-37 / 65) ? ((min(216, 23))) : ((87 ? 226 : -1))))) ? ((((~-4) >> (-88 + 98)))) : var_5)))));
    var_20 = (max(var_20, var_3));
    var_21 = (min(23, (--4529)));
    var_22 = var_1;
    #pragma endscop
}
