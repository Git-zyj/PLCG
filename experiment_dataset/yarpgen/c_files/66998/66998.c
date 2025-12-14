/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_5 ? ((((max(var_4, var_7))) ? var_6 : var_4)) : var_5));
    var_16 = var_10;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_17 = (min(var_17, (((var_5 ? (arr_0 [i_0 + 2] [i_0 + 2]) : (arr_0 [i_0] [i_0 + 4]))))));
        var_18 = (max(((~(arr_1 [i_0]))), ((29746 ? (arr_0 [i_0] [i_0 - 1]) : (!13438)))));
        var_19 = var_4;
        var_20 = (arr_0 [i_0 + 4] [i_0 + 4]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (arr_5 [i_1]);
        var_21 *= ((~(arr_2 [i_1] [i_1])));
        arr_7 [i_1] [i_1] = ((~(arr_3 [19])));
        arr_8 [i_1] = (((arr_3 [i_1]) ? var_3 : (~7)));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
    {
        var_22 = ((-var_14 ? ((var_5 ? (((-(arr_3 [i_2])))) : ((var_0 ? 2341174290 : (arr_2 [i_2] [i_2]))))) : (((((var_10 >= (arr_5 [i_2]))) ? ((((arr_5 [i_2]) != (arr_4 [i_2])))) : (arr_4 [i_2]))))));
        var_23 = (arr_5 [i_2]);
        var_24 = 47615;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    arr_17 [i_2] [i_3 - 2] [i_4] = var_5;
                    var_25 = ((((max(var_2, (arr_10 [i_2] [i_3 - 2])))) ? (arr_2 [i_2] [i_3 - 1]) : (arr_10 [i_2] [i_3 + 1])));
                    var_26 = var_10;
                    var_27 = ((max((var_2 && var_8), (!var_4))));
                }
            }
        }
    }
    #pragma endscop
}
