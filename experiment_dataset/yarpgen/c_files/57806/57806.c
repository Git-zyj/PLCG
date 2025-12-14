/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_1, (63100 == var_2)));
    var_16 = (max((min(var_7, (max(63106, -28)))), var_0));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = 63100;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_18 = (max(1, 14092533117942780034));
                            var_19 = (max((((arr_8 [i_3 - 1] [1] [i_3] [i_3]) ? 63106 : (((!(arr_4 [i_3] [i_4])))))), (((max(-17, 63110))))));
                        }
                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            var_20 = (max(var_20, (((~50) / (arr_7 [i_3 - 1] [i_5 + 1])))));
                            var_21 = (((!(arr_10 [i_0] [6] [i_5 - 1] [i_3 + 1] [7]))) ? (max(23682, (-12241 * 0))) : ((min((arr_9 [i_3 + 1] [i_5 + 1] [i_3]), (arr_11 [i_5] [i_1])))));
                            var_22 = (max((min(((~(arr_2 [i_0]))), (arr_4 [i_1] [i_1]))), ((max((arr_12 [i_0]), -18278)))));
                            arr_14 [i_3] = (max(2988881641478703049, (min(((((arr_6 [0] [0] [0] [i_3]) >= 2428))), (min(36, -1133207427626079016))))));
                        }
                        for (int i_6 = 4; i_6 < 10;i_6 += 1)
                        {
                            var_23 = (((max(2418, (arr_10 [i_3] [i_3] [i_3] [i_3 - 1] [i_3]))) | -2147483647));
                            var_24 = (min(var_24, -535045804));
                            var_25 = ((max(28, (arr_5 [i_3 - 1] [i_6 - 3]))));
                        }
                        var_26 = 16755;
                    }
                }
            }
        }
        arr_17 [i_0] = (max((((!((max(-1781242706, 125)))))), ((-(arr_6 [i_0] [i_0] [i_0] [i_0])))));
    }
    var_27 = (((((var_5 ? (((max(var_7, 49152)))) : var_14))) ? (min(1536, var_14)) : ((((max(35, 11702)))))));
    #pragma endscop
}
