/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((2819359098 == -865409067) ? ((((!(((var_6 ? var_8 : var_11))))))) : (((-304587090 && var_13) ? ((var_12 ? 1475608192 : var_10)) : ((53597 ? var_3 : 2819359095))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_15 = (min(var_15, ((((((!(((var_12 ? 1475608205 : 111)))))) != (120 && var_0))))));
                        var_16 = (((((((!(arr_7 [i_3])))) + 49373)) ^ (((((((arr_1 [i_1]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) <= 5121797163927288304)))));
                        var_17 = (min(var_17, (((14394600982356911537 ? 125 : (((((39 / (arr_2 [i_3])))) ? 30009 : ((-(arr_5 [i_0]))))))))));
                        var_18 = (min(var_18, (((~((((~(arr_4 [i_0] [i_0] [i_0]))) & var_9)))))));
                        var_19 *= ((-((((((arr_1 [i_0]) * 13282411834001781112))) ? 79 : (var_9 || var_2)))));
                    }
                    var_20 = (max(var_20, ((((-47 == 5) > (((!((((arr_0 [i_2] [i_1]) ? var_11 : var_10)))))))))));
                    arr_10 [i_0] [i_0] [i_0] = ((+((((arr_0 [i_2] [i_0]) ? var_12 : 1475608200)))));
                    arr_11 [i_0] [i_0] [i_0] |= (!(((-((~(arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                }
            }
        }
    }
    #pragma endscop
}
