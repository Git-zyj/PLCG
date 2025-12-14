/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_12 = ((var_4 ? ((var_10 ? (-32761 | -20842) : var_5)) : (((((((~(arr_1 [i_0] [i_1])))) == (arr_2 [i_1])))))));
                var_13 = 11968179641937693806;
                arr_4 [i_0] [i_0] = ((((min(((var_2 ? var_1 : -1835036189)), var_10))) >= (arr_3 [i_0])));
                arr_5 [i_0] [i_1] [i_1] = var_8;
                var_14 = (!var_7);
            }
        }
    }

    for (int i_2 = 4; i_2 < 16;i_2 += 1)
    {
        var_15 &= var_4;
        var_16 = ((-(((((var_5 ? -8610642763211044032 : var_0))) ? (1393587723833422978 & 182) : ((((arr_7 [i_2] [i_2]) ? (arr_6 [i_2]) : var_7)))))));
        arr_8 [i_2] = (((((((((arr_6 [i_2]) ? 16323592407131343892 : var_4))) ? (arr_7 [i_2] [i_2]) : (arr_7 [i_2 - 1] [i_2 - 1])))) ? (min(var_10, (((arr_6 [i_2]) ? 1 : var_1)))) : (arr_7 [i_2] [i_2])));
        var_17 *= -20834;
    }
    var_18 = (max(var_18, var_2));
    #pragma endscop
}
