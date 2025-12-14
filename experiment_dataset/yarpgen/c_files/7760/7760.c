/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((28509 < var_0) > var_4));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, var_17));
                    var_21 = (min(var_21, ((((arr_8 [i_0 + 2] [i_0 + 1] [i_0]) ? ((((-3103451971499295973 || (arr_1 [i_0]))) ? ((((arr_1 [i_0]) ? var_1 : var_16))) : var_7)) : (((((((arr_5 [i_0] [i_2]) ? (arr_2 [i_2]) : (arr_4 [i_2]))) > (((((arr_0 [i_0] [i_0]) != 28509)))))))))))));
                }
            }
        }
        var_22 = (min(var_22, ((min((min(((min(0, 4194303))), (arr_1 [i_0 + 1]))), 1)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    {
                        var_23 = (min(var_23, (((min((arr_17 [i_0 - 2] [i_3] [i_4] [i_5 + 1]), ((~(arr_1 [i_5])))))))));

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            arr_22 [i_4] [i_3] [i_4] [i_5] [i_5] = max(((((((arr_10 [i_4]) & (arr_6 [i_4])))) + (max(var_0, 65535)))), (arr_9 [i_0 - 2] [i_4] [3]));
                            arr_23 [i_0 + 2] [i_0] [i_4] [i_4] [i_0] [i_0 + 2] = -var_8;
                            arr_24 [i_6] [i_4] [i_4] [i_0] [i_0] = ((((max((arr_18 [i_6] [i_6] [i_4] [i_6] [i_6] [i_6]), (arr_18 [i_0 + 2] [i_0 + 2] [i_4] [i_5] [i_6] [i_6])))) ? ((((arr_18 [i_0 + 2] [i_0 - 2] [i_4] [i_4] [i_5 - 1] [i_6]) >= var_6))) : ((~(arr_18 [i_0] [i_3] [i_4] [1] [5] [i_6])))));
                            var_24 = ((~(!var_1)));
                        }
                        var_25 += (!28509);
                        var_26 = (((((((arr_10 [i_5]) >= (arr_21 [i_5] [i_5] [i_5 + 2] [i_4] [i_3] [8] [i_0 - 1]))))) >> (var_3 + 8618111888302528216)));
                        var_27 = 28509;
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_28 = (max(574, -575));
        arr_29 [i_7] [i_7] = (~(arr_3 [i_7]));
    }
    var_29 = (min(3595304585, 37026));
    #pragma endscop
}
