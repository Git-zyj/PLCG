/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((~(min(var_7, var_6)))), ((max(var_10, var_8)))));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_14 = (max(var_14, (((+(((arr_0 [i_0 + 1]) * 2876549155)))))));
        var_15 = (!((((131056 > (arr_1 [i_0] [i_0]))) || ((min((arr_1 [i_0] [i_0]), var_8))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    {
                        var_16 = (((max((min((arr_6 [i_2] [i_1]), (arr_9 [i_0] [i_0] [i_2] [i_0]))), ((max(var_8, (arr_9 [i_0 - 1] [i_1] [i_2] [i_3 - 1])))))) >> ((((-1 ? 2291503811 : 131056)) - 2291503806))));

                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            var_17 -= ((-(((((arr_2 [i_0 + 1]) / var_4)) * (arr_3 [i_2] [i_3 - 1])))));
                            var_18 = (arr_6 [i_2] [i_0]);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_19 = min((max(124, (((arr_12 [i_0] [i_1] [i_2] [i_1] [i_5]) ? (arr_7 [i_0] [i_0] [i_0] [i_3] [i_0]) : (arr_6 [i_0] [i_3]))))), (((!((min(4294836251, (arr_5 [i_0] [i_1] [i_2]))))))));
                            var_20 = -1;
                            var_21 ^= 131029;
                        }
                        var_22 = (arr_14 [i_0] [i_1] [i_2] [i_3]);
                    }
                }
            }
        }
        var_23 = (min(var_23, (((var_9 ? ((((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_3 : (arr_13 [i_0] [i_0] [i_0 + 1])))) : (min((arr_5 [i_0] [i_0 + 1] [i_0 - 1]), var_2)))))));
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        var_24 = (min(((~(arr_17 [i_6] [i_6]))), ((((max(-1, (arr_16 [i_6]))) > var_1)))));
        var_25 = var_4;
    }
    var_26 = (max(((-(min(var_6, var_6)))), var_0));
    var_27 = (min(((var_4 ? ((max(var_0, 41))) : var_10)), (var_0 / -var_10)));
    var_28 = (var_4 > var_0);
    #pragma endscop
}
