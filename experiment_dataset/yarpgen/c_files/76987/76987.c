/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += (30397 ^ var_9);
    var_14 -= var_3;
    var_15 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_16 = 17132293543373936963;

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_17 = 2919816322;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_16 [2] [i_4] [i_3] [i_2] [i_1] [i_0] = (~8411533148515422356);
                            arr_17 [i_0] [i_3] [15] [i_3] [i_3] [i_0] [i_3] = var_6;
                            var_18 = 8411533148515422356;
                        }
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = (((5162 == 4048290275) ? (max((arr_1 [i_2]), var_3)) : var_6));

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_19 = -11;
                            var_20 = (min(var_20, (arr_18 [i_2] [i_5] [i_2] [i_1] [i_2])));
                            var_21 &= (((arr_6 [i_0] [i_2]) ? 10035210925194129259 : 10035210925194129259));
                            var_22 = ((1 ? (!1681681988050639373) : (arr_0 [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            var_23 = ((var_9 ? (((arr_22 [i_0] [i_0] [i_0] [i_0] [i_7]) ? (max((arr_10 [i_0] [i_0] [i_2] [9] [i_0]), var_12)) : (((3696009353605557097 ? 738246957 : 1))))) : var_2));
                            arr_26 [i_0] [i_5] [i_0] [i_0] = (((min(-98, -31))));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_24 = (((((-65 < (arr_23 [i_0] [i_5] [i_2] [i_2] [i_8])))) > (arr_7 [i_0] [i_5] [i_2])));
                            var_25 = (((-10 + 2147483647) >> (var_3 != 2)));
                        }
                        var_26 = (min(var_26, ((((arr_15 [i_0] [i_0] [i_1] [i_1] [5] [i_2] [5]) ? 6863227183968810139 : (((-(arr_20 [i_0] [i_1] [i_1] [i_5] [i_0] [i_5])))))))));
                    }
                    var_27 *= (((((~(arr_15 [i_0] [i_0] [i_1] [i_1] [i_1] [i_0] [4]))) & (((var_5 ? -21708 : (arr_14 [i_2] [i_1] [i_1] [i_1] [i_2] [i_2] [i_2])))))));

                    for (int i_9 = 1; i_9 < 22;i_9 += 1)
                    {
                        var_28 = ((var_1 & (((~(arr_22 [i_0] [7] [i_9 + 1] [i_9 - 1] [i_2]))))));
                        var_29 = ((-((4759847674775812927 ? 14451 : (arr_18 [i_0] [i_1] [i_2] [i_2] [i_9])))));
                    }
                    arr_33 [i_0] = ((~(min(10, 1125899904745472))));
                }
            }
        }
    }
    #pragma endscop
}
