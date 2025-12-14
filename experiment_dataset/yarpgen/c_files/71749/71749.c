/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = var_4;
        var_14 = (((((-((24576 ? var_5 : var_6))))) ? var_5 : ((((((arr_0 [i_0] [i_0]) ? var_0 : 0))) ? var_1 : var_0))));
        arr_2 [i_0] [i_0] = min((max((((var_10 >= (arr_0 [i_0] [i_0])))), ((var_5 ? (arr_0 [i_0] [i_0]) : 0)))), var_8);
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] = (min(24557, 41602));
        var_15 = (((((~(~var_9)))) ? (min((min(0, 1)), 40966)) : (min(((min(var_6, 128))), var_11))));
    }
    var_16 = (max(var_16, ((((((!(((var_10 ? 211 : var_11)))))) & (max(var_6, ((var_10 ? var_5 : var_1)))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_17 += ((-var_11 <= (((((max(293712720928277369, 65045))) ? (arr_8 [i_2]) : ((min(40960, (arr_3 [i_2])))))))));
                arr_11 [i_2] = 0;
            }
        }
    }
    #pragma endscop
}
