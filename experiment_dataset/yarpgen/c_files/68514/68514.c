/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_11 = ((((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1])))) ? (212536890 * var_0) : 4407656116624587434));
                            var_12 = (arr_2 [4] [i_1]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_13 = (((((~(arr_15 [i_5] [i_1] [i_5] [i_0 - 1] [i_6] [i_1])))) ? (min(((min((arr_5 [5] [0] [i_5]), (arr_14 [i_0 - 1] [i_1] [9] [i_5] [i_6])))), ((var_6 ? var_9 : 4407656116624587434)))) : ((((min(var_2, 1))) & 14039087957084964181))));
                                var_14 = (((((~(arr_0 [i_0])))) ? (max(1, 4397509640192)) : (-40 < 14039087957084964181)));
                            }
                        }
                    }
                }
                var_15 = (max(var_15, ((((((((arr_0 [i_0]) ? 9223371487098961920 : 18446739676199911424)) != (~var_8)))) + ((3143934644900680653 | (arr_14 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [11])))))));
                arr_17 [1] [i_1] [i_0] = ((((!(arr_5 [i_0] [i_0] [i_1]))) ? (((max(18446739676199911431, 9223372036854775807)) - ((((arr_0 [i_0 + 1]) ? (arr_11 [i_0]) : var_9))))) : (max((max(4397509640205, 127)), 3))));
            }
        }
    }
    var_16 = ((var_5 ? var_7 : var_5));
    var_17 = (max(((((14039087957084964181 ? var_2 : var_0)) & var_4)), (((var_5 >> (var_4 / var_2))))));
    #pragma endscop
}
